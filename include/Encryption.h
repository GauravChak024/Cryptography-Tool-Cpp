#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>

using namespace std;

string encrypt(const string& text, int shift);
string decrypt(const string& text, int shift);

#endif
