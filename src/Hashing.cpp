#include "../include/Hashing.h"
#include <sstream>
#include <iomanip>

std::string generateHash(const std::string& text) {
    std::hash<std::string> hasher;
    auto hash = hasher(text);
    std::stringstream ss;
    ss << std::hex << std::setw(16) << std::setfill('0') << hash;
    return ss.str();
}
