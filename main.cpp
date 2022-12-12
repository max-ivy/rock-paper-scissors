#include "MyHeader.h"

int main()
{
    string name;
    char userPlay;
    char computerPlay;
    bool roundWon;
    int  winCount;
    int  totalRounds;
    int  roundCount;

    GetInput(name, totalRounds);

    winCount = 0;

    for (roundCount = 1; roundCount <= totalRounds; roundCount++)
    {
        userPlay = GetAndCheckPlay();
        computerPlay = GetComputerPlay();
        cout << name << " chooses ";

        switch(userPlay)
        {
            case 'R': cout << "Rock.\n";
                break;
            case 'S': cout << "Scissors.\n";
                break;
            default : cout << "Paper.\n";
        }

        cout << "Computer selects ";

        switch(computerPlay)
        {
            case 'R': cout << "Rock.\n";
                break;
            case 'S': cout << "Scissors.\n";
                break;
            default : cout << "Paper.\n";
        }

        cout << endl;

        roundWon = CheckWin(userPlay, computerPlay);

        if(roundWon)
        {
            winCount++;
        }
        OutputWin(roundWon, name);
    }

    if (totalRounds != 0)
    {
        OutputMatchWinner(name, winCount, totalRounds);
    }

    return 0;
}