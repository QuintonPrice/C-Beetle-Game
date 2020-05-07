// Beetle Game main.cpp
// Quinton Price

#include "Beetle.h"
#include "Dice.h"
#include <iostream>

using namespace std;

int main() {

  string name; 
  int seed;    // Variables
  int dieVal;  

  // Takes in seed
  cout << "Enter seed: ";
  cin >> seed;

  // Checks to make sure seed is an int
  if (!cin) {
    cout << "Invalid seed! Please enter a valid seed: " << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> seed;
  }

  // Creates an instance of dice
  Dice dice(seed);
  cout << endl;

  // Takes first name and makes instance of Beetle
  cout << "Enter name 1: ";
  cin >> name;
  Beetle b1(name);

  // Ensures name input is valid type
  if (!cin) {
    cout << "Invalid seed! Please enter a valid name: " << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> name;
  }

  // Takes second name and makes instance of Beetle
  cout << "Enter name 2: ";
  cin >> name;
  Beetle b2(name);

  // Ensures name input is valid type
  if (!cin) {
    cout << "Invalid seed! Please enter a valid name: " << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> name;
  }

  // Takes third name and makes instance of Beetle
  cout << "Enter name 3: ";
  cin >> name;
  Beetle b3(name);

  // Ensures name input is valid type
  if (!cin) {
    cout << "Invalid seed! Please enter a valid name: " << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> name;
  }

  // Takes fourth name and makes instance of Beetle
  cout << "Enter name 4: ";
  cin >> name;
  Beetle b4(name);

  // Ensures name input is valid type
  if (!cin) {
    cout << "Invalid seed! Please enter a valid name: " << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> name;
  }

  // While none of the players have a complete beetle, iterates through loop
  while (!b1.getHasAllParts() && !b2.getHasAllParts() && !b3.getHasAllParts() &&
         !b4.getHasAllParts()) {

    dieVal = dice.rollDice(); // Gets a dice value from the rollDice function
    b1.playGame(dieVal);      // Plays game with given dice value

    // If this player has won, output to console and exit program
    // This process is repeated for the next three players
    if (b1.getHasAllParts()) {
      cout << "Winner: " << b1.getName() << endl;
      cout << "Turns: " << b1.getTurns() << endl;
      break;
    }

    dieVal = dice.rollDice();
    b2.playGame(dieVal);
    if (b2.getHasAllParts()) {
      cout << "Winner: " << b2.getName() << endl;
      cout << "Turns: " << b2.getTurns() << endl;
      break;
    }

    dieVal = dice.rollDice();
    b3.playGame(dieVal);
    if (b3.getHasAllParts()) {
      cout << "Winner: " << b3.getName() << endl;
      cout << "Turns: " << b3.getTurns() << endl;
    }

    dieVal = dice.rollDice();
    b4.playGame(dieVal);
    if (b4.getHasAllParts()) {
      cout << "Winner: " << b4.getName() << endl;
      cout << "Turns: " << b4.getTurns() << endl;
      break;
    }
  }

  return 0;
}
