#include "../include/Utils.h"
#include <fstream>
#include <sstream>

std::string readFile(const std::string& fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        return "";
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void writeFile(const std::string& fileName, const std::string& content) {
    std::ofstream file(fileName);
    file << content;
}
