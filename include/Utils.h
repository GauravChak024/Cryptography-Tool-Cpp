#ifndef UTILS_H
#define UTILS_H

#include <string>

using namespace std;

string readFile(const string& fileName);
void writeFile(const string& fileName, const string& content);

#endif
