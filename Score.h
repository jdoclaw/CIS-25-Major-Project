#ifndef SCORE_H
#define SCORE_H

#include "Artist.h"
#include "Metrics.h"

// Responsibility: turns artist metrics into numbers (growth rate, momentum score)

class Score {
public:
    Score();

    bool growthRate(const Artist& a, Metric m, int windowDays, double& result) const;

    double momentumScore(const Artist& a) const;

private:
    double spotifyWeight;
    double instagramWeight;
    int minBaseValue;

    int findBaselineIndex(const Artist& a, int windowDays) const;
};

#endif