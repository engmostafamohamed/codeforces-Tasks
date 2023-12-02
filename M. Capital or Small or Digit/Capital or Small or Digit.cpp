// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
// Input
// Only one line containing a character X which will be a capital or small letter or digit.

// Output
// Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

// Examples
// input
// A
// output
// ALPHA
// IS CAPITAL
// input
// 9
// output
// IS DIGIT
// input
// a
// output
// ALPHA
// IS SMALL

// the answer

#include <iostream>
using namespace std;

int main()
{
    char input;
    cin>> input;
    int character=static_cast<int>(input);
    if (character>=65 &&character<=90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if(character>=97 &&character<=122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if(character>=48 &&character<=57)
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}
