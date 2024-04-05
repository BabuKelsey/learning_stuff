#include "../header/Wordle.h"

void Wordle() {
    /**
     * select a 5 leter word from a library of words 
     * (probably stored to an array and randomly pick one? or maybe some kind of table?)
     * 
     * entering 5 letters will scan through and find matches to current word
     * - let the user know which letters are right
     * - let the user know if the letters are in the right spot
    */
    
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
        //cout << "\nRandom word: " << randomWord << "\n";  //use for testing

        cout << "\nTries left: " << 5 - tries << "\nType 5 letters: ";
        getline(cin, s_input);  // check if input is more than 5 before continuing

        // do check
        // check each first, if all matches, exit loop
        if (s_input == randomWord) {
            cout << "You matched the word!\n";
            
            isSolved = true;
        } else {
            for (int i = 0; i < randomWord.length(); i++) {
                //cout << "\nComparing: \"" << library[ranNum][i] << "\" to:\n";    //use for testing

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