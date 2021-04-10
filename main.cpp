//Programmer: Timothy Sallwasser
//School: Missouri University of Science and Technology
//Project: Pickhacks 2021
//Filename: main.cpp

#include <iostream>
#include <cstdlib>
#include "main.h"
using namespace std;
int main()
{
    bool play;
    bool won;
    int player = 0;   //rand()%2;




    cout << "Welcome to my project for Pickhacks 2021!" << endl;
    cout << "This is a very important game for you to play. Failure here could lead to GLOBAL DISASTER!\n";
    cout << "Anything but absolute victory will leed to destruction. The fate of the world is in your hands.\n"
    cout << "To accept this challenge please enter 1. To quit now and run for your life, enter 0.\n";
    cout << "Your choice:\t";
    cin >> play;
    won = (game(play, player));
	return 0;
}