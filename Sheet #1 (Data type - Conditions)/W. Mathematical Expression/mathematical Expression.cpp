// Given a mathematical expression. The expression will be one of the following expressions:

// A + B = C, A - B = C and A * B = C

// where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

// Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

// Input
// Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

// Output
// Output either "Yes" (without the quotation) or the right answer depending on the statement.

// Examples
// input
// 5 + 10 = 15
// output
// Yes
// input
// 3 - 1 = 2
// output
// Yes
// input
// 2 * 10 = 19
// output
// 20



// the answer

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string stringInput;
    long long firstNumber,secondNumber;
    double value;
    getline(cin, stringInput);
    if (stringInput.find("+")!= string::npos)
    {
        firstNumber=stoll(stringInput.substr(0,stringInput.find("+")));
        secondNumber=stoll(stringInput.substr(stringInput.find("+")+1,stringInput.find("=")));
        value=stod(stringInput.substr(stringInput.find("=")+1,stringInput.size() - 1));
        if ((firstNumber + secondNumber) == value)
        {
            cout << "Yes" << endl;
        }else
        {
            cout << firstNumber + secondNumber << endl;
        }
    }else if(stringInput.find("-")!= string::npos && stringInput.find("*")== string::npos){
        firstNumber=stoll(stringInput.substr(0,stringInput.find("-")));
        secondNumber=stoll(stringInput.substr(stringInput.find("-")+1,stringInput.find("=")));
        value=stod(stringInput.substr(stringInput.find("=")+1,stringInput.size() - 1));
        if ((firstNumber - secondNumber) == value)
        {
            cout << "Yes" << endl;
        }else
        {
            cout << firstNumber - secondNumber << endl;
        }
    }
    else if(stringInput.find("*")!= string::npos){
        firstNumber=stoll(stringInput.substr(0,stringInput.find("*")));
        secondNumber=stoll(stringInput.substr(stringInput.find("*")+1,stringInput.find("=")));
        value=stod(stringInput.substr(stringInput.find("=")+1,stringInput.size() - 1));
        if ((firstNumber * secondNumber) == value)
        {
            cout << "Yes" << endl;
        }else
        {
            cout << firstNumber * secondNumber << endl;
        }
    }
    
    return 0;
}
