#ifndef REPORT_H
#define REPORT_H

#include "Artist.h"
#include "Roster.h"
#include "Score.h"

// Responsibility: formatting results for terminal

class Report {
public:
    Report();

    void printArtist(const Artist& a, const Score& s) const;
    void printRanking(const Roster& r, const Score& s) const;
};

#endif