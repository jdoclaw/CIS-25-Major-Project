#ifndef RELEASE_H
#define RELEASE_H

#include <string>

// Responsibility: type of project and when artist dropped it so metrics can be compared before and after

class Release {
public:
    Release(const std::string& title, int daysSinceJanFirst);

    const std::string& getTitle() const;
    int getDay() const;

private:
    std::string title;
    int daysSinceJanFirst;
};

#endif