#include "MyHeader.h"

void GetInput(string &name, int &n1)
{
    cout << "Enter player's name: ";
    getline(cin, name);
    cout << "Enter # of rounds: ";
    cin  >> n1;
    cout << endl;
    cin.ignore(10000, '\n');
}
