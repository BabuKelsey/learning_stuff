# This repo is just me learning stuff.
> currently no plans
> *maybe* make snake again

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
>    - string GetOperator()

>*ClearScreen.cpp
>  - function and purpose:
>    - void ClearScreen()
>      - works to clear the terminal

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
>      - works exactly as you would expect it to

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