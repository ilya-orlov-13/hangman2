#include "Header.h"
#include <iostream>
#include <vector>

using namespace std;

void displayWord(const string& word, const vector<bool>& guessed) {
    for (int i = 0; i < word.size(); ++i) {
        if (guessed[i]) {
            cout << word[i] << ' ';
        }
        else {
            cout << "_ ";
        }
    }
    cout << endl;
}

bool checkLetter(char letter, const string& word, vector<bool>& guessed) {
    bool found = false;
    for (int i = 0; i < word.size(); ++i) {
        if (tolower(word[i]) == tolower(letter)) {
            if (guessed[i]) {
                cout << "Вы уже угадали эту букву\n";
                return true;
            }
            guessed[i] = true;
            found = true;
        }
    }
    return found;
}
