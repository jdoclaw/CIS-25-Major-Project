#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include <vector>
#include "Artist.h"

// Responsibility: collection of all tracked artists

class Roster {
public:
    Roster();

    bool add(const Artist& a);                 
    Artist* find(const std::string& name);    
    const Artist* find(const std::string& name) const;
    bool remove(const std::string& name);    
    int size() const;
    const std::vector<Artist>& getAll() const;

private:
    std::vector<Artist> artists;
};

#endif