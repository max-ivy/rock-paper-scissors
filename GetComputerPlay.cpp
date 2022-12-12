#include "MyHeader.h"

char GetComputerPlay()
{
    char computerPlay;
    int  randomPlay;
    srand(time(NULL));
    randomPlay = rand()%3 + 1;

    switch(randomPlay)
    {
        case 1 : computerPlay = 'R';
            break;
        case 2 : computerPlay = 'P';
            break;
        default : computerPlay = 'S';
    }
    
    return computerPlay;
}
