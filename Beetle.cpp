// Beetle.cpp

#include <iostream> //	cin & cout
#include <string>
using namespace std;

#include "Beetle.h"
#include "Dice.h"

// Constructor for assigning body part values and # of turns
Beetle::Beetle() {}

// Constructor for assigning a name
Beetle::Beetle(string alias) {

  // Sets player name
  name = alias;

  // Initializes bool value to false
  this->hasAllParts = false;
  
  // Sets all body parts equal to 0
  this->numBody = 0;
  this->numHead = 0;
  this->numLegs = 0;
  this->numWings = 0;
  this->numAntenna = 0;
  this->numEyes = 0;

  // Sets number of turns to 0
  this->turns = 0;

  // Sets value of dice to 0  
  diceVal = 0;
  
}

// Checks to see if all required body parts are there. If they are, updates
// value of hasAllParts
bool Beetle::checkAllBodyParts(int numBody, int numHead, int numLegs, int numWings, int numAntenna, int numEyes) {
  if (numBody == 1 && numHead == 1 && numWings == 2 && numLegs == 6 && numAntenna == 2 && numEyes == 2) {
    this->hasAllParts = true;
  }
  return hasAllParts;
}


void Beetle::playGame(int diceVal) {

    // If dice is 6 and numBody <1, increment numBody
    if (diceVal == 6 && numBody < 1) {
      addNumBody();
    }

    // If dice is 5, has body, numHead <1, increment head
    if (diceVal == 5 && numBody == 1 && numHead < 1) {
      addNumHead();
    }

    // If dice is 4, has body, numWings <2, increment wings
    if (diceVal == 4 && numBody == 1 && numWings < 2) {
      addNumWings();
    }

    // If dice is 3, has body, numLegs <6, increment legs
    if (diceVal == 3 && numBody == 1 && numLegs < 6) {
      addNumLegs();
    }

    // If dice is 2, has head, numAntennas <2, increment antenna
    if (diceVal == 2 && numHead == 1 && numAntenna < 2) {
      addNumAntenna();
    }

    // If dice is 1, has head, numEyes <2, increment eyes
    if (diceVal == 1 && numHead == 1 && numEyes < 2) {
      addNumEyes();
    }

    // Increments number of turns
    this->turns++;

    // Checks to see if all body parts are present
    checkAllBodyParts(numBody, numHead, numLegs, numWings, numAntenna, numEyes);
}

