#include "../header/IsInt.h"

/**
 * Checks if the input string represents an integer.
 * 
 * This function takes a string input and checks if it represents an integer.
 * An integer can have an optional leading negative sign followed by one or more digits.
 * 
 * @param input The input string to be checked.
 * @return true if the input is an integer, false otherwise.
 */
bool IsInt(string input) {
    if (input.empty() || input == "-") {
        return false;  // Empty string/single char of "-" is not an integer
    }

    // Initialize loop index
    int i = (input[0] == '-') ? 1 : 0;

    // Check if all characters are digits
    for (; i < input.length(); i++) {
        if (!isdigit(input[i]) || isspace(input[i])) {
            return false;  // Non-numeric character or whitespace found
        }
    }

    return true;
}