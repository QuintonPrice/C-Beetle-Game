// Dice.h

#ifndef DICE_H
#define DICE_H

#include "Beetle.h"
using namespace std;

class Dice {
    public:
        // Default constructor
        Dice();

        // Constructor to set seed
        Dice(int seed);

        // Rolls dice and returns value
        int rollDice();

        // Returns seedVal
        int getSeed() { return seedVal; }
        
    private:
        int seedVal;
};

#endif //DICE_H