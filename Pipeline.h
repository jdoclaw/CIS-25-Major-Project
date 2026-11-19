#ifndef PIPELINE_H
#define PIPELINE_H

#include <map>
#include <string>

// Responsibility: tracks artist's management stage

enum class Stage {
    Watching,
    Contacted,
    Meeting,
    WorkingTogether
};

class Pipeline {
public:
    Pipeline();

    void moveArtist(const std::string& name, Stage stage);
    bool hasArtist(const std::string& name) const;
    Stage getStage(const std::string& name) const;  
    void removeArtist(const std::string& name);

    static std::string stageName(Stage stage);       

private:
    std::map<std::string, Stage> stages;
};

#endif