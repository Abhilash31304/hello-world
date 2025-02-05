#include <iostream>
#include <fstream>

int main() {
    // File name
    std::string filename = "example.txt";
    
    // Writing to a file
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "Hello, this is a test file.\n";
        outFile << "C++ File handling example.";
        outFile.close();
        std::cout << "File written successfully!\n";
    } else {
        std::cerr << "Error opening file for writing!\n";
    }
    
    // Reading from the file
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        std::string line;
        std::cout << "Reading from file:\n";
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading!\n";
    }
    
    return 0;
}