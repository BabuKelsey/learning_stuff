#include "../header/ClearScreen.h"

/**
 * Clear terminal screen.
 * 
 * This function clears the terminal screen on the respective OS.
*/
void ClearScreen() {
    #ifdef _WIN32
        // For Windows
        system("cls");
    #else
        // For Unix-like systems
        system("clear");
    #endif
}