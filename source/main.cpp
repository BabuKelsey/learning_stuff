#include <iostream>
#include <string>
#include <math.h>
// #include "IsInt.h"
#include "../header/IsInt.h"

using std::cout, std::cin, std::string;

// bool IsInt(string input) {
//     if (input.length() < 1) {
//         return false;
//     }

//     for (int i = 0; i < input.length(); i++) {
//         if (input[i] == '-' && i == 0 && input.length() != 1) {
//             i++;
//         }

//         if (!isdigit(input[i])) {
//             if ((input[i] == '-' && i != 0) || (input[i] == '-' && input.length() == 1)) {
//                 return false;
//             } else {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

int main() {
    cout << "\n\n\n\nMinecraft calculator\n\n\n\n";

    string s_input;
    float f_input, f_stacks, f_remainder, f_logs, f_shulkers;
    bool isInt = false;

    // try {
    //     cin >> input;
    //     if (cin.fail())
    //         throw std::invalid_argument("Input not a number.\n");
    //     // if (input < 1)
    //     //     throw 2;
    // }
    // catch (std::exception e) {
    //     cout << "Input \"" << input << "\" is not a number.\n";
    // }

    while(!isInt) {
        cout << "Enter amount: ";
        cin >> s_input;

        isInt = IsInt(s_input);

        if (isInt && stof(s_input) < 1) {
            isInt = false;
        }
    }

    f_input = stof(s_input);

    f_stacks = f_input/64;
    f_remainder = (f_stacks - floor(f_stacks)) * 64;
    f_logs = ceil(f_input/4);
    f_shulkers = ceil(f_stacks/27);
    

    cout << "\n\nAmount: " << s_input 
         << "\nShulkers: " << f_shulkers
         << "\nStacks: " << int(f_stacks) 
         << "\nRemainder: " << f_remainder
         << "\nLogs: " << f_logs;

    return 0;
}