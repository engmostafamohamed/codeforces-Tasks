// The following lines show some C++ data types, their format specifiers and their most common bit widths:

// int : 32 Bit integer.
// long long : 64 bit integer
// Char : 8 bit Characters & symbols
// Float : 32 bit real value
// Double : 64 bit real value

// For example, to print a character followed by a double:
// char ch = 'd';
// double d = 234.432;
// cout << ch << " "<< d;
 
// Input
// Only one line containing the following space-separated values: int, long long, char, float and double respectively.

// Output
// Print each element on a new line in the same order it was received as input.

// Don't print any extra spaces.

// Example

// input
// 3 12345678912345 a 334.23 14049.30493

// output
// 3
// 12345678912345
// a
// 334.23
// 14049.3

#include <iostream>
using namespace std;
int main (){
    int  integerNum;
    long long  bigNumber;
    char character;
    float floatNumber;
    double doubleNumber;
    cin>> integerNum >> bigNumber >> character >> floatNumber >> doubleNumber;
   cout << integerNum << endl;
   cout << bigNumber << endl;
   cout << character << endl;
   cout << floatNumber << endl;
   cout << doubleNumber << endl;
   return 0; 
}