// Given 4 numbers A,B,C and D . If AB > CD print "YES" otherwise, print "NO".

// Input
// Only one line containing 4 numbers A,B,C and D (1≤A,C≤107) , (1≤B,D≤1012)
// Output
// Print "YES" or "NO" according to the problem above.

// Examples
// input
// 3 2 5 4
// output
// NO
// input
// 5 2 4 2
// output
// YES
// input
// 5 2 5 2
// output
// NO
// Note
// First Example :

// 32 = 9 and 54 = 625 then 9 < 625 so the answer is NO.

// Second Example :

// 5^2 = 25 and 4^2 = 16 then 25 > 16 so the answer is YES.

// Third Example :

// 5^2 = 25 and 5^2 = 25 then 2^5 = 25 so the answer is NO.
// the answer

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // long double num1,num2,num3,num4;
    // cin >> num1 >> num2 >> num3 >> num4;
    // num2=num2/1e10;
    // num4=num4/1e10;
    // if (pow(num1,num2)>pow(num3,num4))
    // {
    //     cout<< "YES";
    // }else{
    //     cout<< "NO";
    // }
    // return 0;

    //another answer

    long long num1,num2,num3,num4;
    cin >> num1 >> num2 >> num3 >> num4;
    if (log(num1)*num2>log(num3)*num4)
    {
        cout<< "YES";
    }else{
        cout<< "NO";
    }
    return 0;
}