// Given a number N
// . Determine whether N
//  is float number or integer number.

// Note:

// If N
//  is float number then print "float" followed by the integer part followed by decimal part separated by space.
// If N
//  is integer number then print "int" followed by the integer part separated by space.
// For more clarification see the examples below.

// Input
// Only one line containing a number N (1≤N≤103)
// Output
// Print the answer required above.

// Examples

// input
// 234.000
// output
// int 234

// input
// 534.958
// output
// float 534 0.958


// the answer

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string number;
    long long integerNumber=0;
    double floatNumber=0;
    cin >> number;
    if (number.find('.')!= string::npos)
    {
        integerNumber=stoi(number.substr(0,number.find('.')));
        floatNumber=stod(number.substr(number.find('.')+1,number.size() - 1));
    }else{
        integerNumber = stoi(number);
    }
    if (number.find('.')== string::npos||floatNumber == 0)
    {
        cout << "int " << integerNumber << endl;
    }else
    {
        cout << "float " << integerNumber << " " << "0."<<floatNumber << endl;
    }
    return 0;
}


// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int main()
// {
//     string number;
//     long long integerNumber = 0;
//     double floatNumber = 0;
//     cin >> number;

//     size_t decimalPos = number.find('.');
//     if (decimalPos != string::npos ||floatNumber == 0) {
//         integerNumber = stoi(number.substr(0, decimalPos));
//         string decimalPart = number.substr(decimalPos + 1);
//         double power = pow(10, decimalPart.size());
//         floatNumber = stoi(decimalPart) / power;
//     } else {
//         integerNumber = stoi(number);
//     }

//     if (decimalPos == string::npos) {
//         cout << "int " << integerNumber << endl;
//     } else {
//         cout << "float " << integerNumber << " " << floatNumber << endl;
//     }

//     return 0;
// }
