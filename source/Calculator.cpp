#include "../header/Calculator.h"

/**
 * Calculator with basic arithmetic functions.
 * 
 * Can "add", "subtract", "multiply", "divide".
 * Checks for *divide* by "0".
 * Checks for *valid inputs* only.
 * Function loops till the user enters "exit".
*/
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
        } else if (s_op == "-") {
            f_currentTotal -= f_num2;
        } else if (s_op == "/") {
            if (f_num2 == 0) {
                cout << "You cannot divide by 0.\n";
            } else {
                f_currentTotal /= f_num2;
            }
        } else if (s_op == "*") {
            f_currentTotal *= f_num2;
        }

        cout << "Current total: " << f_currentTotal << "\n";
    }

    return 0;
}

/**
 * Validates the user's input for numbers.
 * 
 * @return string of valid number or "exit".
*/
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

/**
 * Validates the user's input for an operator.
 * 
 * @return string of valid operator or "exit".
*/
string GetOperator() {
    bool isOp = false;
    string s_input = "0";

    while(!isOp) {
        getline(cin, s_input);

        if (s_input == "+" || s_input == "-" || s_input == "/" || s_input == "*" || s_input == "exit") {
            return s_input;
        } 

        cout << "Enter a valid operator \"+\" \"-\" \"/\" \"*\": ";
    }

    return "exit";
}