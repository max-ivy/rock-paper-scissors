#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Name of user, number of rounds
void GetInput(string &name, int &n1);

// Accepts play from user, returns character representing play
char GetAndCheckPlay();

// Computer play
char GetComputerPlay();

// Checks to see if user won round
bool CheckWin(char userPlay, char computerPlay);

// Outputs user's name and their win status
void OutputWin(bool result, string name);

// Outputs user's name and % of user wins/losses
void OutputMatchWinner(string name, int playerWin, int rounds);

#endif