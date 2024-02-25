// Given a lowercase alphabet character. You have to print the next character in the alphabet.

// Input Only one line containing a lowercase English letter C .

// Output Print the next letter to C in the alphabet.

// Example
// input
// a
// output
// b
// Note
// The next letter to z is a

#include <iostream>
using namespace std;
int main() {
    char inputChar;
    cin  >> inputChar;
    int asciiCode = static_cast<int>(inputChar);
    if (asciiCode == 122)
    {
        cout <<static_cast<char>(97);
    }else {
        cout <<static_cast<char>(asciiCode+1);
    }
    return 0;
}