#include <iostream>
#include <string>
#include <math.h>
#include "../header/IsInt.h"
#include "../header/MinecraftCalculator.h"
#include "../header/Calculator.h"
#include "../header/Wordle.h"

using std::cout, std::cin, std::string;

int main() {
    int choice = 1;

    while (choice != 0){
        string s_input;
        bool isInt = false;

        cout << "\n\n\n\n0. Exit\n1. Minecraft calculator\n2. Calculator\n3. Wordle\nEnter option: ";

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
                MinecraftCalculator();
                break;
            case 2:
                Calculator();
                break;
            case 3:
                Wordle();
                break;
            default:
                cout << "\n\n\nOption doesnt exist.\n";
                break;
        }
    }
    

    return 0;
}