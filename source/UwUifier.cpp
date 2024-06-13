#include "../header/UwUifier.h"

/**
 * UwUifies text from input.
*/
void UwUifier() {
    cout << "\n\nUwUifies text from input.\n\n"
            "Enter the text that you wish to convert here: ";

    string s_input, s_convertedInput;    

    getline(cin, s_input);

    s_convertedInput = s_input;

    for(int i = 0; i < s_input.length(); i++) {
        // check if letter at i is r/l and convert to w
        if (s_input[i] == 'l' || s_input[i] == 'r') {
            s_convertedInput[i] = 'w';
        } else if (s_input[i] == 'o' && s_input[i+1] == 'o') {
            s_convertedInput[i] = 'u';
            s_convertedInput[i+1] = 'u';
        //} else if (s_input[i] == 'o' ) {
        //    s_convertedInput[i] = s_input[i];
        //    s_convertedInput[i+1] = 'h';
        } else {
            s_convertedInput[i] = s_input[i];
        }
    }
    
    cout << "\nInput: " << s_input
         << "\nConverted input: " << s_convertedInput;
}