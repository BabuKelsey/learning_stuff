#include "../header/AlternateTextCases.h"

/**
 * Alternate text cases from input.
*/
void AlternateTextCases() {
    cout << "\n\nAlternates text cases.\n\n"
            "Enter the text that you wish to convert here: ";

    //cout << "\nthis is 1%2: " << 1%2 << "\nthis is 2%2: " << 2%2;

    string s_input, s_convertedInput;    

    getline(cin, s_input);

    for(int i = 0; i < s_input.length(); i++) {
        // convert odds to lower and evens to upper
        if (i % 2 == 0) {   // is even
            s_convertedInput += toupper(s_input[i]);
        } else {    // is odd
            s_convertedInput += tolower(s_input[i]);
        }
    }
    
    cout << "\nInput: " << s_input
         << "\nConverted input: " << s_convertedInput;
}