#include <iostream>
#include <string>
#include <math.h>
// #include "IsInt.h"
#include "../header/IsInt.h"
#include "../header/MinecraftCalculator.h"
#include "../header/Calculator.h"

using std::cout, std::cin, std::string;

int main() {
    string s_input;
    int choice = 1;
    bool isInt = false;

    while (choice != 0){
        cout << "\n\n\n\n0. Exit.\n1. Minecraft calculator.\n2. Calculator.\nEnter option: ";

        while(!isInt) {
            getline(cin, s_input);

            isInt = IsInt(s_input);
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
            default:
                cout << "\n\n\nOption doesnt exist.\n";
                break;
        }
        
        isInt = false;
    }
    

    return 0;
}