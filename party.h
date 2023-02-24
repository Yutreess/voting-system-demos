/*
  Name: Yutreess
  Objective: Simulate an election using the Sainte Lague method of
    apportioning seats to a legislative body
*/

#ifndef PARTY_H
#define PARTY_H

#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

// Preset number of Parties
const int NUM_PARTIES = 7;
// Number of seats to be allocated
const int NUM_SEATS = 163;
// Preset Party Names, followed by number of votes for said party
const string DEM = "Democratic";
const int DEM_VOTES = 751808;
const string PRG = "Progressive";
const int PRG_VOTES = 501206;
const string REP = "Republican";
const int REP_VOTES = 847337;
const string PAT = "Patriot";
const int PAT_VOTES = 871399;
const string LIB = "Libertarian";
const int LIB_VOTES = 41205;
const string GRN = "Green";
const int GRN_VOTES = 8283;
const string CON = "Constitution";
const int CON_VOTES = 3919;

class Party
{
  public:
    // Constructors
    Party(const string name, const int numVotes);
    Party(const string name);
    Party();
    // Set Functions
    void setNumVotes(const int newNumVotes);
    void setNumSeats(const int newNumSeats);
    void setName(const string newName);
    void setQuotient();
    // Get Functions
    int getNumVotes();
    int getNumSeats();
    double getQuotient();
    string getName();
    // Other Functions
    void addSeat();

  private:
    int pNumVotes;
    int pNumSeats;
    double pQuotient;
    string pName;

};

// Operator Overload
ostream& operator << (ostream& os, Party& p);

#endif