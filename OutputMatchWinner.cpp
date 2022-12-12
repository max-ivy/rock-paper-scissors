#include "MyHeader.h"

void OutputMatchWinner(string name, int winCount, int totalRounds)
{
    double winPercentage;
    double lossPercentage;

    cout << setprecision(0) << fixed;
    cout << setfill('*') << setw(34) << '\n';
    cout << "********* FINAL RESULTS *********\n";
    cout << setfill('*') << setw(34) << '\n';
    cout << endl;

    winPercentage = (double (winCount) / totalRounds) * 100;
    lossPercentage = 100 - winPercentage;

    if (winPercentage > 50)
    {
        cout << name << " is the winner.\n";
        cout << name << " won " << winPercentage << "% of the time.";
    }
    else
    {
        cout << name << "lost" << lossPercentage << "% of the time.";
    }
    cout << setprecision(6);
    cout.unsetf(ios::fixed);
}