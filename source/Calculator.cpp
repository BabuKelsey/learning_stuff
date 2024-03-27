#include "../header/Calculator.h"

int Calculator() {
    string s_input, s_op;
    float f_currentTotal, f_num2;
    bool done = false, isInt = false;;

    cout << "\n\nCalculator program. Enter \"exit\" to exit calculator.\nEnter first number: ";
    s_input = GetNumber();

    if (s_input == "exit") {
        return 0;
    } else {
        f_currentTotal = stof(s_input);
    }

    while(!done) {
        cout << "Enter operator: ";
        s_op = GetOperator();

        if (s_op == "exit") {
            return 0;
        }

        cout << "Enter next number: ";
        s_input = GetNumber();

        if (s_input == "exit") {
            return 0;
        } else {
            f_num2 = stof(s_input);
        }
        
        if (s_op == "+") {
            f_currentTotal += f_num2;

            cout << f_currentTotal << "\n";
        } else if (s_op == "-") {
            f_currentTotal -= f_num2;

            cout << f_currentTotal << "\n";
        } else if (s_op == "/") {
            if (f_num2 == 0) {
                cout << "You cannot divide by 0.\n";
            } else {
                f_currentTotal /= f_num2;
            
                cout << f_currentTotal << "\n";
            }
        } else if (s_op == "*") {
            f_currentTotal *= f_num2;
            
            cout << f_currentTotal << "\n";
        }
    }

    return 0;
}

string GetNumber() {
    bool isInt = false;
    string s_input;

    while(!isInt) {
        getline(cin, s_input);

        isInt = IsInt(s_input);

        if (!isInt) {
            if (s_input == "exit") {    // only check if input is exit if not int
                return s_input;
            } else {                    // else reloop
                cout << "Enter a valid number: ";                
            }
        }
    }

    return s_input;
}

string GetOperator() {
    bool isOp = false;
    string s_input = "0";

    while(!isOp) {
        getline(cin, s_input);

        if (s_input == "+") {
            return s_input;
        } else if (s_input == "-") {
            return s_input;
        } else if (s_input == "/") {
            return s_input;
        } else if (s_input == "*") {
            return s_input;
        } else if (s_input == "exit") {
            return s_input;
        }

        cout << "Enter a valid operator \"+\" \"-\" \"/\" \"*\": ";
    }

    return " ";
}