// Given a number N
// . Print the summation of the numbers that is between 1 and N
//  (inclusive).

// .∑i=1Ni

// Input
// Only one line containing a number N
//  (1≤N≤109)
// Output
// Print the summation of the numbers that are between 1 and N
//  (inclusive).

// Examples
// input
// 3
// output
// 6
// input
// 10
// output
// 55
// Note
// First Example :

// the numbers between 1 and 3 are 1,2,3 .

// So the answer is: (1 + 2 + 3 = 6)

// Second Example :

// the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.

// So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)


// the answer

#include<iostream>
#include<iomanip>
using namespace std;

// int main()
// {
//     long long Number, result = 0;
//     cin >> Number;
//     for (int i = 1; i <= Number; i++)
//     {
//         result += i;
//     }
//     cout << result << endl;
//     return 0;
// }



/////////////////////////////////
// another answer to save more memory during processing the program 
int main()
{
    long long Number, result = 0;
    cin >> Number;
    if (Number %2 ==0)
    {
        result=(Number+1) *(Number /2);
    }else
    {
        result= Number *(int(Number /2)+1);
    }
    cout << result << endl;
    return 0;
}


