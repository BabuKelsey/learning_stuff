#include "../header/IsInt.h"

bool IsInt(string input) {
    if (input.length() < 1) {
        return false;
    }

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '-' && i == 0 && input.length() != 1) {
            i++;
        }

        if (!isdigit(input[i]) || isspace(input[i])) {
            if ((input[i] == '-' && i != 0) || (input[i] == '-' && input.length() == 1)) {
                return false;
            } else {
                return false;
            }
        }
    }

    return true;
}