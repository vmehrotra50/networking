#include <string>
#include <cctype>
#include <iostream>

using namespace std;

void turnToX(string in) {
    for (auto &c : in) { // Note: without reference, string does not change
        c = 'X';
    }
}
