#ifndef STORAGE_H
#define STORAGE_H

#include <string>
#include "Roster.h"

// Responsibility: saving a Roster to a file and loading it back

class Storage {
public:
    Storage();

    bool save(const Roster& roster, const std::string& filename) const;
    bool load(Roster& roster, const std::string& filename) const;  

private:
};

#endif