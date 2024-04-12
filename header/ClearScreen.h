#pragma once

#include <cstdlib>
#include <iostream>

class ClearScreen {
private:
    bool b_clearScreen;

public:
    ClearScreen();
    void clearScreen();
    void setOption(bool);
    bool getOption();
};