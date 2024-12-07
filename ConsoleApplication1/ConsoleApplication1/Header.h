#pragma once

#include <string>
#include <vector>

using namespace std;

void startGame();
void displayWord(const string& word, const vector<bool>& guessed);
bool checkLetter(char letter, const string& word, vector<bool>& guessed);
void displayHangman(int mistakes);
bool isWordGuessed(const vector<bool>& guessed);