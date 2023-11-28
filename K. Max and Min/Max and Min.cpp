// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// Examples
// input
// 1 2 3
// output
// 1 3

// input
// -1 -2 -3
// output
// -3 -1

// input
// 10 20 -5
// output
// -5 20


// the answer

#include<iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main()
{
    long long A, B, C ,Max,Min,arr[3];
    cin >> A >> B >> C;
    arr[0]=A;
    arr[1]=B;
    arr[2]=C;
    Max=Min=arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (Max > arr[i])
        {
            Max=arr[i];
        }if (Min < arr[i])
        {
            Min=arr[i];
        }
    }
    cout<< Max <<" "<< Min;
    return 0;
}


