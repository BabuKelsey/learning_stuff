#include <iostream>
#include <string>
#include <math.h>
#include "../header/ClearScreen.h"
#include "../header/IsInt.h"
#include "../header/MinecraftCalculator.h"
#include "../header/Calculator.h"
#include "../header/Wordle.h"
#include "../header/Bank.h"

using std::cout, std::cin, std::string;

int main() {
    ClearScreen CS;
    int choice = 1;

    while (choice != 0){
        string s_input;
        bool isInt = false, clearScreen = false;

        cout << "\n\n\n\n0. Exit\n"
            "1. Options.\n"
            "2. Minecraft calculator\n"
            "3. Calculator\n"
            "4. Wordle\n"
            "5. Bank\n"
            "Enter option: ";

        while(!isInt) {
            getline(cin, s_input);

            isInt = IsInt(s_input);

            if (!isInt) {
                cout << "Please enter a valid option: ";
            }
        }

        choice = stoi(s_input);

        switch (choice) {
            case 0:
                cout << "Goodbye.\n";
                return 0;
            case 1:
                cout << "\nOptions: \nEnter \"1\" to enable clear screen.\nEnter \"2\" to disable clear screen.\n> ";

                isInt = false;

                while(!isInt) {
                    getline(cin, s_input);

                    isInt = IsInt(s_input);

                    if (isInt) {
                        choice = stoi(s_input);

                        if (choice == 1) {
                            CS.setOption(true);

                            cout << "Screen will clear.";
                        } else if (choice == 2) {
                            CS.setOption(false);

                            cout << "Screen will not clear.";
                        } else {
                            isInt = false;
                        }
                    }

                    if (!isInt) {
                        cout << "Please enter a valid option: ";
                    }
                }

                break;
            case 2:
                CS.clearScreen();
                MinecraftCalculator();
                break;
            case 3:
                CS.clearScreen();
                Calculator();
                break;
            case 4:
                CS.clearScreen();
                Wordle();
                break;
            case 5:
                CS.clearScreen();
                BankOfBanks();
                break;
            default:
                cout << "\n\n\nOption doesnt exist.\n";
                break;
        }
    }
    

    return 0;
}