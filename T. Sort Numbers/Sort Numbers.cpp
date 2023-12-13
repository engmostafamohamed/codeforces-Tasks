// Given three ascendingArr A, B, C. Print these ascendingArr in ascending order followed by a blank line and then the values in the sequence as they were read.

// Input
// Only one line containing three ascendingArr A, B, C ( - 106  ≤  A, B, C  ≤  106)

// Output
// Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

// Examples
// input
// 3 -2 1
// output
// -2
// 1
// 3

// 3
// -2
// 1
// input
// -2 10 0
// output
// -2
// 0
// 10

// -2
// 10
// 0

// the answer
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    double firstNumber, secondNumber, thirdNumber, buffer;
    cin >> firstNumber >> secondNumber >> thirdNumber;
    double ascendingArr[] = {firstNumber, secondNumber, thirdNumber};
    double descendingArr[] = {firstNumber, secondNumber, thirdNumber};
    int length = sizeof(ascendingArr) / sizeof(ascendingArr[0]);
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (ascendingArr[i] > ascendingArr[j])
            {
                // swap(ascendingArr[i], ascendingArr[j]);
                buffer = ascendingArr[i];
                ascendingArr[i] = ascendingArr[j];
                ascendingArr[j] = buffer;
            }
        }
    }
    cout << ascendingArr[0] << endl;
    cout << ascendingArr[1] << endl;
    cout << ascendingArr[2] << endl;
    cout << endl;
    cout << firstNumber << endl;
    cout << secondNumber << endl;
    cout << thirdNumber << endl;

    return 0;
}