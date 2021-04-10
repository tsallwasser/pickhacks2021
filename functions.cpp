//Programmer: Timothy Sallwasser
//School: Missouri University of Science and Technology
//Project: Pickhacks 2021
//Filename: functions.cpp

#include <iostream>
#include <cstdlib>
#include "main.h"
using namespace std;

bool game(const bool play, const int player)
{
    bool win = 0;
    char board[3][3];
    int space = 1;
    int moves[MAX_MOVES];
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j< 3; j++)
        {
            board[i][j] = space;
            moves[space-1] = space;
            space++;
        }
    }
    cout << moves[1];
    if (!play)
    {
        win = 0;
    }
    else
    {
        cout << "You will be player " << player+1 << ". You will move " << player+1 << ".\n";
        for (int i = 0; i < MAX_MOVES; i++)
        {
            
        }

    }
    return win;
}