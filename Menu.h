#ifndef MENU_H
#define MENU_H

#include "Roster.h"
#include "Pipeline.h"
#include "Score.h"
#include "Storage.h"
#include "Report.h"

// Responsibility: CLI - reads user input, calls corresponding class, hands results to Report

class Menu {
public:
    Menu();

    void run();   

private:
    Roster roster;
    Pipeline pipeline;
    Score score;
    Storage storage;
    Report report;

    void showOptions() const;
    void handleAddArtist();
    void handleLogMetrics();
    void handleShowArtist();
    void handleRanking();
    void handleSave();
    void handleLoad();
};

#endif