#include "../header/UwUifier.h"

/**
 * UwUifies text from input.
*/
void UwUifier() {
    cout << "\n\nUwUifies text from input.\n\n"
            "Enter the text that you wish to convert here: ";

    string s_input, s_convertedInput;    

    getline(cin, s_input);

    for(int i = 0; i < s_input.length(); i++) {
        // check if letter at i is "X" and convert to "Y"
        if (s_input[i] == 'l' || s_input[i] == 'r') {
            s_convertedInput += 'w';
        } else if (s_input[i] == 'o' && s_input[i+1] == 'o') {
            s_convertedInput += "uu";
            i++;
        } else if (s_input[i] == 'o' && s_input[i+1] != 'o' ) {
           s_convertedInput += s_input[i];
           s_convertedInput += 'h';
        } else if (s_input[i] == 'i') {
            s_convertedInput += 'y';
        } else {
            s_convertedInput += s_input[i];
        }
    }
    
    cout << "\nInput: " << s_input
         << "\nConverted input: " << s_convertedInput;
}