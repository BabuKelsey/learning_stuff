#include "../header/Wordle.h"
/**
 * Select a 5 leter word from a library of words.
 * 
 * Will scan through the user's input of 5 letters to find any matches to the current word.
 * - Lets the user know which letters are right and if they are in the right spot.
*/
void Wordle() {
    // try importing a file for the library of words
    string s_input, randomWord, library[] = {"buzzy", "actor", "acute", "halts", "zesty", "shity"};
    char c_input[5];
    bool isSolved = false;
    int tries = 0, floor = 0, max = (sizeof(library) / sizeof(library[0])) - 1, ranNum;

    // generate a random number
    std::random_device rand_dev;
    std::mt19937 gen(rand_dev());

    std::uniform_int_distribution<int> distribution(floor, max);

    ranNum = distribution(gen);
    randomWord = library[ranNum];

    // start game
    cout << "\n\nWordle\n\n";

    while(!isSolved && tries < 6) {
        cout << "\nTries left: " << 5 - tries << "\nType 5 letters: ";
        getline(cin, s_input);  // check if input is more than 5 before continuing

        // do check
        // check each first, if all matches, exit loop
        if (s_input == randomWord) {
            cout << "Congrats! You guessed the word!\n";
            
            isSolved = true;
        } else {
            for (int i = 0; i < randomWord.length(); i++) {
                for (int j = 0; j < randomWord.length(); j++) {
                    if (s_input[j] == randomWord[i]) {
                        if (i == j) {
                            cout << "The letter \"" << s_input[j] << "\" is in the right place\n";
                        } else {
                            cout << "The letter \"" << s_input[j] << "\" exists!\n";
                        }
                    }
                }
            }
        }

        tries++;
    }
}