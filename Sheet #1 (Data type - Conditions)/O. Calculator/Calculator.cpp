// Given a mathematical expression. The expression will be one of the following expressions: A+B , A−B , A∗B and A/B .
// Print the result of the mathematical expression.
// Input
// Only one line contains A,S and B (1≤A,B≤104), S is either (+,−,∗,/).

// Output
// Print the result of the mathematical expression.

// Examples

// input
// 7+54
// output
// 61

// input
// 17*10
// output
// 170

// Note
// For the dividing operation you should print the division without any fractions.

// the answer
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,firstNumber,SecondNumber;
    cin >> str;
    // cout << "Operation found: " << str.find('+') << endl;
    // char operation = '\0';

    if (str.find('+') != string::npos)
    {
        firstNumber=str.substr(0,str.find('+'));
        SecondNumber=str.substr(str.find('+')+1,str.size() - 1);
        cout <<stoi(firstNumber) + stoi(SecondNumber)<<endl;
    }
    else if (str.find('-') != string::npos)
    {
        firstNumber=str.substr(0,str.find('-'));
        SecondNumber=str.substr(str.find('-')+1,str.size() - 1);
        cout <<stoi(firstNumber) - stoi(SecondNumber)<<endl;
    }
    else if (str.find('*') != string::npos)
    {
        firstNumber=str.substr(0,str.find('*'));
        SecondNumber=str.substr(str.find('*')+1,str.size() - 1);
        cout <<stoi(firstNumber) * stoi(SecondNumber)<<endl;
    }
    else if (str.find('/') != string::npos)
    {
        firstNumber=str.substr(0,str.find('/'));
        SecondNumber=str.substr(str.find('/')+1,str.size() - 1);
        cout <<stoi(firstNumber) / stoi(SecondNumber)<<endl;
    }
}