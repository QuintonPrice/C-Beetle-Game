// Beetle.h

#ifndef BEETLE_H
#define BEETLE_H

using namespace std;

#include "Dice.h"
#include <string>

class Beetle {
    public:
        // Constructor for default values of turns & numBodyParts
        Beetle();
        // Constructor to set name and seed
        Beetle(string alias);
        
        // Main function to play game
        void playGame(int diceVal);

        // Returns name
        string getName() {return name; };

        // Checks to see if all body parts are present
        bool checkAllBodyParts(int numBody, int numHead, int numLegs, 
        int numWings, int numAntenna, int numEyes);

        // Returns values of body parts
        int getNumBody() { return numBody; }
        int getNumHead() { return numHead; }
        int getNumLegs() { return numLegs; }
        int getNumWings() { return numWings; }
        int getNumAntenna() { return numAntenna; }
        int getNumEye() { return numEyes; }

        // Returns number of turns
        int getTurns() { return turns; }

        // Functions to incrememnt body parts
        void addNumBody() { this->numBody++; }
        void addNumHead() { this->numHead++; }
        void addNumLegs() { this->numLegs++; }
        void addNumWings() { this->numWings++; }
        void addNumAntenna() { this->numAntenna++; }
        void addNumEyes() { this->numEyes++; }

        // Returns value of hasAllParts
        bool getHasAllParts() { return hasAllParts; }
                
    private:
        int diceVal;    // Value of face of die when rolled
        string name;    // Name to be used for user
        int turns;      // Number of turns

        // Variables for body parts
        int numBody;
        int numHead;
        int numLegs;
        int numWings;
        int numAntenna;
        int numEyes;
        
        
        bool hasAllParts;   // Bool that returns true if beetle has all parts

};
#endif // BEETLE_H