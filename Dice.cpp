// Dice.cpp

#include <iostream> //	cin & cout
#include "Dice.h"
using namespace std;

// Default constructor
Dice::Dice() {}

// Constructor that takes seed value and uses srand()
Dice::Dice(int seed) {
    seedVal = seed;
    srand(seed);
}

// Function that rolls dice and returns value
int Dice::rollDice() {
    return( rand() % 6 + 1 );
}


