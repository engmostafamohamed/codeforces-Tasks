// Given 2 numbers A
//  and B
// . Print floor, ceil and round of A/B

// Note:

// Floor: Is a mathematical function that takes a real number X
//  and its output is the greatest integer less than or equal to X
// .
// Ceil: Is a mathematical function that takes a real number X
//  and its output is the smallest integer larger than or equal to X
// .
// Round: Is a mathematical function that takes a real number X
//  and its output is the closest integer to that number X
// .

// For more clarification visit the links in the notes below.

// Input
// Only one line containing two numbers A and B (1≤A,B≤103)
// Output
// Print 3 lines that contain the following in the same order:

// "floor A / B = Floor result" without quotes.
// "ceil A / B = Ceil result" without quotes.
// "round A / B = Round result" without quotes.
// Examples

// input
// 10 3
// output
// floor 10 / 3 = 3
// ceil 10 / 3 = 4
// round 10 / 3 = 3

// input
// 10 4
// output
// floor 10 / 4 = 2
// ceil 10 / 4 = 3
// round 10 / 4 = 3

// input
// 10 6
// output
// floor 10 / 6 = 1
// ceil 10 / 6 = 2
// round 10 / 6 = 2
// Note
// Links:

// For Rounding method visit: https://www.mathsisfun.com/numbers/rounding-methods.html.
// For Flooring and Ceiling method visit: https://www.mathsisfun.com/sets/function-floor-ceiling.html.


// the answer

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    long long A,B;
    cin >> A >> B;
    double result = static_cast<double>(A) / B;
    cout <<"floor "<< A <<" / "<< B<<" = "<< floor(result)<< endl;
    cout <<"ceil "<< A <<" / "<< B<<" = "<< ceil(result)<< endl;
    cout <<"round "<< A <<" / "<< B<<" = "<< round(result)<< endl;
    return 0;
}


