# This repo is just me learning stuff.
> currently no real plans
> *maybe* make snake again
> make a "bank" using classes to handle users and their balances
>  - store to external file

# Working modules (so far as appears in file order)
>*Calculator.cpp
>  - function and purpose:
>    - int Calculator()
>      - with basic arithmetic functions
>      - can "add", "subtract", "multiply", "divide"
>      - checks for *divide* by "0"
>      - checks for *valid inputs* only
>      - function loops till the user enters "exit"
>    - string GetNumber()
>      - validates the user's input for numbers and returns as string
>      - only valid non-numeric string is "exit"
>    - string GetOperator()
>      - validates the user's input for operators and returns as string
>      - only valid non-operator string is "exit"

>*ClearScreen.cpp
>  - function and purpose:
>    - ClearScreen::ClearScreen()
>      - default class constructor
>    - void ClearScreen::setOption(bool input)
>      - sets the option to clear the terminal through "input"
>    - void ClearScreen::getOption()
>      - gets the option set by the user to clear the terminal
>    - void ClearScreen::clearScreen()
>      - clears the terminal based on the user's preference
>        - done this because vsc uses an internal simulated cmd and was bugging out
>          - its a linux but because im on windows, its not reading right

>*IsInt.cpp
>  - function and purpose:
>    - bool IsInt()
>      - checks if the user's input is a valid int
>      - checks for negative
>      - checks if the input is a valid int

>*MinecraftCalculator.cpp
>  - function and purpose:
>    - void MinecraftCalculator()
>      - counts shulkers, stacks, remainder, and logs

>*Wordle.cpp
>  - function and purpose:
>    - void Wordle()
>      - game of wordle
>      - works exactly as you would expect it to xd

# TODO
>*try doing try-catch error handling
>  - not sure if neccessary if my code is already handling edge cases, but i will check
  
>*calculator only accepts integers as input
>  - modify "IsInt" to "IsDouble" || "IsFloat" for decimal inputs
>    - should just be by adding a check for "." character
>  - add modulo
>  - add bit calculator and converter

>*wordle
>  - read library from file instead of hardcoding it to an array