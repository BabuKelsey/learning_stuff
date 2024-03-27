#include "../header/Calculator.h"

void Calculator() {
    float f_currentTotal, f_num2;
    char c_op;
    bool done = false;

    cout << "\n\nCalculator program.\nEnter first number: ";
    f_currentTotal = GetNumber();

    while(!done) {  // to exit, miught have to throw values into functions
        cout << "Enter operator: ";
        c_op = GetOperator();

        cout << "Enter next number: ";  //check for divide by 0
        f_num2 = GetNumber();
        
        if (c_op == '+') {
            f_currentTotal += f_num2;

            cout << f_currentTotal << "\n";
        } else if (c_op == '-') {
            f_currentTotal -= f_num2;

            cout << f_currentTotal << "\n";
        } else if (c_op == '/') {
            if (f_num2 == 0) {
                cout << "You cannot divide by 0.\n";
            } else {
                f_currentTotal /= f_num2;
            
                cout << f_currentTotal << "\n";
            }
        } else if (c_op == '*') {
            f_currentTotal *= f_num2;
            
            cout << f_currentTotal << "\n";
        }
    }
}

int GetNumber() {
    bool isInt = false;
    string s_input = "0";

    while(!isInt) {
        getline(cin, s_input);

        isInt = IsInt(s_input);

        if (!isInt) {
            cout << "Enter a valid number: ";
        }
    }

    return stof(s_input);
}

char GetOperator() {
    char c_op;
    bool isOp = false;
    string s_input = "0";

    while(!isOp) {
        getline(cin, s_input);

        if (s_input.length() == 1) {
            c_op = s_input[0];

            if (c_op == '+') {
                return c_op;
            } else if (c_op == '-') {
                return c_op;
            } else if (c_op == '/') {
                return c_op;
            } else if (c_op == '*') {
                return c_op;
            }
        }

        if (!isOp) {
            cout << "Enter a valid operator \"+\" \"-\" \"/\" \"*\": ";
        }
    }

    return ' ';
}