#include "../include/Encryption.h"

std::string encrypt(const std::string& text, int shift) {
    std::string result = "";
    for (char c : text) {
        if (isupper(c))
            result += char(int(c + shift - 65) % 26 + 65);
        else if (islower(c))
            result += char(int(c + shift - 97) % 26 + 97);
        else
            result += c;
    }
    return result;
}

std::string decrypt(const std::string& text, int shift) {
    return encrypt(text, 26 - shift);
}
