#ifndef ARTIST_H
#define ARTIST_H

#include <string>
#include <vector>
#include "Metrics.h"
#include "Release.h"

// Responsibility: holds one artist identity + metric snapshots and releases 
// Keeps metric history sorted by date

class Artist {
public:
    Artist(const std::string& name, const std::string& region, const std::string& mainGenre);

    const std::string& getName() const;
    const std::string& getRegion() const;
    const std::string& getMainGenre() const;

    void addMetrics(const Metrics& m);    
    void addRelease(const Release& r);

    const std::vector<Metrics>& getMetricsHistory() const;
    const std::vector<Release>& getReleases() const;

private:
    std::string name;
    std::string region;
    std::string mainGenre;
    std::vector<Metrics> metricsHistory;
    std::vector<Release> releases;
};

#endif