// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

// For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

// Input
// Only one line containing a number X (999 < X  ≤  9999)

// Output
// If the first digit is even print "EVEN" otherwise print "ODD".

// Examples

// input
// 4569
// output
// EVEN

// input
// 3569
// output
// ODD

// Note
// Second Example :

// In 3569 the first digit is 3 and its ODD.

// the answer
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int firstNumber=stoi(str.substr(0,1));
    if (firstNumber % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}