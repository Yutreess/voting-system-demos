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

int main()
{
  // Set all parties
  // Party Democratic = 
  Party parties[NUM_PARTIES] = 
  { 
    Party(DEM, DEM_VOTES),
    Party(PRG, PRG_VOTES),
    Party(REP, REP_VOTES),
    Party(PAT, PAT_VOTES),
    Party(LIB, LIB_VOTES),
    Party(GRN, GRN_VOTES),
    Party(CON, CON_VOTES)
  };

  // Print name of each Party
  for (int i = 0; i < NUM_PARTIES; i++)
  {
    cout << parties[i] << endl;
  }

  // Pseudo code to brainstorm how to handle the rest 

  for (int i = 1; i < NUM_SEATS; i++) 
  {
    cout << "Apportioning seat " << i << endl;
    // Decide for each seat who wins that seat
    int winningParty = 0;
    for (int j = 0; j < NUM_PARTIES; j++)
    {
      // Find the largest quotient party and award them the seat
      if (parties[j].getQuotient() > parties[winningParty].getQuotient())
      {
        winningParty = j;
      }
    }
    // Winning party has been found, give them the seat
    parties[winningParty].addSeat();

    cout << "The " << parties[winningParty] << " Party ";
    cout << "wins seat " << i << "." << endl;
  }
  cout << "----------------" << endl;
  // Print Final Results

  for (int i = 0; i < NUM_PARTIES; i++)
  {
    cout << "----------------" << endl;
    cout << "The " << parties[i] << " Party won ";
    cout << parties[i].getNumVotes() << " votes and " << parties[i].getNumSeats();
    cout << " seats." << endl;
  }

  /*
    For all 163 seats, decide who gets each one.
    First, find the party in the list with the highest quotient
    Second, give that party the seat
    Third, recalculate that party's quotient
    Repeat until all 163 seats are given
    - Publish the results for every seat given.
    - Publish the final results of the election, including:
      - Total Votes Cast
      - Total Seats Apportioned
      - Seats per Party
      - Votes per Party
  */

  return 0;
}