#include "MyHeader.h"

bool CheckWin(char userPlay, char computerPlay)
{
    bool roundWon;

    roundWon = ((userPlay == 'R' && computerPlay == 'S') ||
                (userPlay == 'P' && computerPlay == 'R') ||
                (userPlay == 'S' && computerPlay == 'P'));
    
    return roundWon;
}