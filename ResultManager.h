#ifndef RESULTMANAGER_H
#define RESULTMANAGER_H

#include "ParasiteDetector.h"
#include <vector>
#include <fstream>

class ResultManager {
public:
    ResultManager();
    ~ResultManager();

    void storeResults(const std::vector<Parasite>& results);
    std::vector<Parasite>& retrieveResults();
    void saveResults(const std::string& imagePath); 
    void exportResults(const std::string& imagePath);

private:
    std::vector<Parasite> detectedParasites;
};

#endif // RESULTMANAGER_H