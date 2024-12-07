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
