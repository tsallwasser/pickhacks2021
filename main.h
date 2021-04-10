//Programmer: Timothy Sallwasser
//School: Missouri University of Science and Technology
//Project: Pickhacks 2021
//Filename: main.h

#include <iostream>
#include <cstdlib>
#ifndef MAIN_H
#define MAIN_H
using namespace std;

const int MAX_MOVES = 5;
const int PLAYER = 88;
const int ENEMY = 79;

bool game(const bool play, const int player);
int intro();
void play();
#endif
