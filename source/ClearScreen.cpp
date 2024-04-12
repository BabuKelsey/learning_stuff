#include "../header/ClearScreen.h"

/**
 * ClearScreen default class to be used as an option to clear the terminal screen through the user's choice.
*/
ClearScreen::ClearScreen() {
    // init values
    b_clearScreen = false;
}

/**
 * Sets the option of the user's preference to clear the terminal.
 * 
 * @param input The option that the user chooses.
*/
void ClearScreen::setOption(bool input) {
    b_clearScreen = input;
}

/**
 * Gets the option of the user's preference to clear the terminal.
 * 
 * @return The option stored in the ClearScreen object.
*/
bool ClearScreen::getOption() {
    return b_clearScreen;
}

/**
 * Clears the terminal screen.
 * 
 * This function clears the terminal screen on the respective OS.
*/
void ClearScreen::clearScreen() {
    if (ClearScreen::getOption() == true) {
        #ifdef _WIN32
            // For Windows
            system("cls");
        #else
            // For Unix-like systems
            //system("clear");
            std::cout << "\033[2J\033[H";
        #endif
    }
}