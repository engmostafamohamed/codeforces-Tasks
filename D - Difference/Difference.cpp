// Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D).

// Input
// Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

// Output
// Print "Difference  =  " without quotes followed by the equation result.

// Examples

// input
// 1 2 3 4

// output
// Difference = -10

// input
// 2 3 4 5

// output
// Difference = -14

// input
// 4 5 2 3

// output
// Difference = 14

// the answer
# include <iostream>
using namespace std;
int main(){
    long long A,B,C,D,Difference;
    cin>>A>>B>>C>>D;
    Difference = ( A * B )-(C * D);
    cout<<"Difference = "<<Difference<<endl;
    return 0;
}