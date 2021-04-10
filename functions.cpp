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
    bool valid_move;
    bool game_over = 0;
    bool win = 0;
    char board[3][3]={};
    int space = 49;
    int moves[MAX_MOVES];
    int move;
    int round = 1;
    int x, y;
    int temp_move;
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j< 3; j++)
        {
            board[i][j] = space;
            moves[space-1] = space;
            space++;
        }
    }
    if (!play)
    {
        win = 0;
    }
    else
    {
        cout << "You will be player " << player+1 << ". You will move " << player+1 << ".\n";
        cout << "Your moves will be marked with an X, the enemy will mark his spaces with O." << endl;


        for (int i = 0; i < MAX_MOVES; i++)
        {
            move = 10;
            while ((move > 9) || (move <= 0))
            {
                //print board
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        cout << "| "<< board[j][k] << " ";
                    }
                    cout << "|" <<  endl;

                }
                valid_move = 0;
                
                
                //Player move
                while (!valid_move)
                {
                    cout << "Please select an open space:\t";
                    cin >> move;
                    temp_move = move + 48;
                    

                    //check for open space
                
                    for (int j = 0; j < 3; j++)
                    {
                        for (int k = 0; k < 3; k++)
                        {
                            if (board[j][k]==temp_move)
                            {
                                board[j][k] = 88;
                                valid_move = 1;
                            }
                        }
                    }
                }
                valid_move = 0;
                
                if (round < MAX_MOVES)
                {
                    //computer move
                    while (!valid_move)
                    {
                        
                        move = rand()%9;
                        temp_move = move + 48;
                        

                        //check for open space
                    
                        for (int j = 0; j < 3; j++)
                        {
                            for (int k = 0; k < 3; k++)
                            {
                                if (board[j][k]==temp_move)
                                {
                                    board[j][k] = ENEMY;
                                    valid_move = 1;
                                }
                            }
                        }
                    }
                }
                
            }


            //check for win vertically and horizontally
            for (int j = 0; j < 3; j++)
            {
                if (board[j][1]==88 && board[j][2]==88 && board[j][0]==88 || board[0][j]==88 && board[1][j]==88 && board[2][j]==88)
                {
                    win = 1;
                    i = MAX_MOVES;
                }
                else if (board[j][1]==ENEMY && board[j][2]==ENEMY && board[j][0]==ENEMY || board[0][j]==ENEMY && board[1][j]==ENEMY && board[2][j]==ENEMY)
                i = MAX_MOVES;
            }
            //check for win diagonally
            if (board[0][0] == PLAYER && board[1][1] == PLAYER && board[2][2] == PLAYER || board[0][2] == PLAYER && board[1][1] == PLAYER && board[2][0] == PLAYER)
            {
                win = 1;
                i = MAX_MOVES;
            }
            else if (board[0][0] == ENEMY && board[1][1] == ENEMY && board[2][2] == ENEMY || board[0][2] == ENEMY && board[1][1] == ENEMY && board[2][0] == ENEMY)
            i = MAX_MOVES;

         round++;   
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            cout << "| "<< board[j][k] << " ";
        }
        cout << "|" <<  endl;

    }
    return win;
}