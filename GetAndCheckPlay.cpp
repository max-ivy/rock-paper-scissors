#include "MyHeader.h"

char GetAndCheckPlay()
{
    char userPlay;
    bool invalid;

    cout << setfill('*') << setw(23) << '\n';
    cout << "** Choose Your Play **\n";
    cout << setfill('*') << setw(23) << '\n';

    do
    {
        cout << "R - ROCK\n";
        cout << "P - PAPER\n";
        cout << "S - SCISSORS\n";
        cout << "Enter your play: ";
        cin.get(userPlay);
        cin.ignore (10000, '\n');
        userPlay = toupper(userPlay);

        invalid = userPlay != 'R' && userPlay != 'P' && 
                  userPlay != 'S';

        if (invalid)
        {
            cout << endl;
            cout << "Invalid input - R, P, or S only.";
        }
    }while(invalid);

    cout << endl;

    return userPlay;
}