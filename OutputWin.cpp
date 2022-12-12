#include "MyHeader.h"

void OutputWin(bool roundWon, string name)
{
    if(roundWon)
    {
        cout << name << "wins!\n";
    }
    else
    {
        cout << "Computer wins. Next time, " << name << "."
             << end;
    }
    cout << endl << endl;
}