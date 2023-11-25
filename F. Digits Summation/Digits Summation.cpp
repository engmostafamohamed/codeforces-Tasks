// Given two numbers N and M. Print the summation of their last digits.

// Input
// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

// Output
// Print the answer of the problem.

// Example
// input
// 13 12
// output
// 5
// Note
// First Example :

// last digit in the first number is 3 and last digit in the second number is 2.

// So the answer is: (3 + 2 = 5)

// the answer

#include<iostream>
#include<iomanip>
using namespace std;

int sumDigits(long long inputOne,long long inputTwo){

    int sum_digits=(inputOne %10)+(inputTwo %10);
    return sum_digits;
}
int main()
{
    long long N,M;
    cin >>N>>M; 
    cout << sumDigits(N,M)<<endl;
    return 0;
}





