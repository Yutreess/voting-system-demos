/*
  Name: Yutreess
  Objective: Simulate an election using the Sainte Lague method of
    apportioning seats to a legislative body
*/

#include <string>
#include <iostream>
#include <cstdlib>
#include "party.h"
using namespace std;

// Constructors
Party::Party(const string name, const int numVotes)
{
  setName(name);
  setNumVotes(numVotes);
  setNumSeats(0);
  setQuotient();
}

Party::Party(const string newName)
{
  setName(newName);
  setNumVotes(1);
  setNumSeats(0);
  setQuotient();
}

Party::Party()
{
  setName("Unnamed Party");
  setNumVotes(1);
  setNumSeats(0);
  setQuotient();
}

// Set Functions

void Party::setNumVotes(const int newNumVotes)
{
  pNumVotes = newNumVotes;
}

void Party::setNumSeats(const int newNumSeats)
{
  pNumSeats = newNumSeats;
}

void Party::setName(const string newName)
{
  pName = newName;
}

void Party::setQuotient()
{
  pQuotient = pNumVotes / ((2 * pNumSeats) + 1);
}

// Get Functions

int Party::getNumVotes()
{
  return pNumVotes;
}

int Party::getNumSeats()
{
  return pNumSeats;
}

double Party::getQuotient()
{
  return pQuotient;
}

string Party::getName()
{
  return pName;
}

// Other Functions
void Party::addSeat()
{
  pNumSeats += 1;
  setQuotient();
}

// Operator Overload
ostream& operator <<(ostream& os, Party& p)
{
  os << p.getName();
  return os;
}