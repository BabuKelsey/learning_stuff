#include <iostream>
#include <string>
#include <math.h>
// #include "IsInt.h"
#include "../header/IsInt.h"
#include "../header/MinecraftCalculator.h"

using std::cout, std::cin, std::string;

int main() {
    string s_input;
    int choice = 1;
    bool isInt = false;

    while (choice != 0){
        cout << "\n\n\n\n0. Exit.\n1. Minecraft calculator.\nEnter option: ";

        while(!isInt) {
            getline(cin, s_input);

            isInt = IsInt(s_input);

            if (isInt && stof(s_input) < 1) {
                isInt = false;
            } else if (!isInt) {
                cout << "Please enter a valid number: ";
            }
        }

        choice = stoi(s_input);

        switch (choice) {
            case 0:
                return 0;
            case 1:
                MinecraftCalculator();
                break;
            default:
                cout << "\n\n\nOption doesnt exist.\n";
                break;
        }

        // choice = 1;
        isInt = false;
    }
    

    return 0;
}