#include "ResultManager.h"

ResultManager::ResultManager()
{
    // Constructor implementation
    detectedParasites = new DetectedParasites();
}

ResultManager::~ResultManager() 
{
    // Destructor implementation
    delete detectedParasites;
}
void ResultManager::storeResults(const std::vector<Parasite>& results)
{
	detectedParasites = results;
}

std::vector<Parasite>& retrieveResults()
{
    return &detectedParasites;
}

void ResultManager::saveResults(const std::string& imagePath) 
{
    // Extract filename without extension
    std::string filename = imagePath.substr(imagePath.find_last_of("/\\") + 1); // Extract filename from path
    filename = filename.substr(0, filename.find_last_of(".")); // Remove extension

    // Create CSV file
    std::ofstream outputFile(filename + ".csv");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to create CSV file for storing results." << std::endl;
        return;
    }

    // Write header to CSV file
    outputFile << "Bounding Box (x,y,width,height), Confidence Score, Type" << std::endl;

    // Write each result to the CSV file
    for (const auto& result : detectedParasites) {
        outputFile << result.boundingBox.x << "," << result.boundingBox.y << ","
                   << result.boundingBox.width << "," << result.boundingBox.height << ","
                   << result.confidenceScore << "," << result.type << std::endl;
    }

    // Close the CSV file
    outputFile.close();
}

void ResultManager::exportResults(const std::string& imagePath) 
{
    // Extract filename without extension
    std::string filename = imagePath.substr(imagePath.find_last_of("/\\") + 1); // Extract filename from path
    filename = filename.substr(0, filename.find_last_of(".")); // Remove extension

    // Create TXT file
    std::ofstream outputFile(filename + ".txt");
    if (!outputFile.is_open()) 
    	{
        std::cerr << "Error: Unable to create TXT file for exporting results." << std::endl;
        return;
    	}

    // Write header to TXT file
    outputFile << "Results for image: " << filename << std::endl;
    outputFile << "---------------------------------------" << std::endl;

    // Write each result to the TXT file
    for (const auto& result : detectedParasites) {
        outputFile << "Bounding Box: (" << result.boundingBox.x << "," << result.boundingBox.y << "), "
                   << "Width: " << result.boundingBox.width << ", "
                   << "Height: " << result.boundingBox.height << std::endl;
        outputFile << "Confidence Score: " << result.confidenceScore << std::endl;
        outputFile << "Type: " << result.type << std::endl;
        outputFile << "---------------------------------------" << std::endl;
    }

    // Close the TXT file
    outputFile.close();
}
