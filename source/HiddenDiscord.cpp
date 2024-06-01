#include "../header/HiddenDiscord.h"

/**
 * Convert's input to spoilered text for discord.
*/
void HiddenDiscord() {
    cout << "\n\nConverts input to spoilered text for discord.\n\n"
            "Enter the text that you wish to convert here: ";

    string s_input, s_convertedInput;    

    getline(cin, s_input);

    for(int i = 0; i < s_input.length(); i++) {
        // string + ||
        // string + input at i
        // string + ||

        s_convertedInput += "||";
        s_convertedInput += s_input[i];
        s_convertedInput += "||";
    }
    
    cout << "\nyour input: " << s_input
         << "\nyour converted input: " << s_convertedInput;
}