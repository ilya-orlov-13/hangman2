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

void displayHangman(int mistakes) {
    cout << "Ошибки: " << mistakes << "\n ____\n   |\n";
    if (mistakes >= 1) cout << "  O\n";
    if (mistakes >= 2) cout << "  |\n";
    if (mistakes >= 3) cout << " |";
    if (mistakes >= 4) cout << "|";
    if (mistakes >= 5) cout << "|" << endl;
    if (mistakes == 6) cout << " ||" << endl;
    cout << endl;
}

bool isWordGuessed(const vector<bool>& guessed) {
    for (bool g : guessed) {
        if (!g) return false;
    }
    return true;
}
