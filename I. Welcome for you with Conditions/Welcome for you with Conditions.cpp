// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

// Input
// Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

// Output
// Print "Yes" or "No" according to the statement.

// Examples

// input
// 10 9
// output
// Yes

// input
// 5 5
// output
// Yes

// input
// 5 7
// output
// No

// the answer

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long A, B;
    cin >> A>>B;
    if (A >= B)
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }
    return 0;
}


