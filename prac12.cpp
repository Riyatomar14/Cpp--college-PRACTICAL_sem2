/* copy the file without whitespaces */

#include <iostream>
#include <fstream>
#include <string>

void copyFileWithWhitespaceRemoval(const std::string& sourceFile, const std::string& destinationFile) {
    std::ifstream inFile(sourceFile);
    std::ofstream outFile(destinationFile);
    if (inFile.is_open() && outFile.is_open()) {
        char c;
        while (inFile.get(c)) {
            if (!std::isspace(c)) {
                outFile.put(c);
            }
        }
        std::cout << "File content copied with whitespaces removed." << std::endl;
        inFile.close();
        outFile.close();
    } else {
        std::cerr << "Unable to open files." << std::endl;
    }
}

int main() {
    std::string sourceFile = "input.txt";
    std::string destinationFile = "output.txt";
    copyFileWithWhitespaceRemoval(sourceFile, destinationFile);
    return 0;
}
