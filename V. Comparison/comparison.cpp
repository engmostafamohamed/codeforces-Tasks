// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

// The comparison is as follows: A < B, A > B, A = B.

// Where A, B are two integer numbers and S refers to the sign between them.

// Input
// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

// Output
// Print "Right" if the comparison is true, "Wrong" otherwise.

// Examples
// input
// 5 > 4
// output
// Right
// input
// 9 < 1
// output
// Wrong
// input
// 4 = 4
// output
// Right


// the answer

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string stringInput,result;
    long long firstNumber,secondNumber;
    getline(cin, stringInput);

    if (stringInput.find("<")!= string::npos)
    {
        firstNumber=stoi(stringInput.substr(0,stringInput.find("<")));
        secondNumber=stoi(stringInput.substr(stringInput.find("<")+1,stringInput.size() - 1));
        if (firstNumber < secondNumber)
        {
            result = "Right";
        }else
        {
            result = "Wrong";
        }
    }else if(stringInput.find(">")!= string::npos){
        firstNumber=stoi(stringInput.substr(0,stringInput.find(">")));
        secondNumber=stoi(stringInput.substr(stringInput.find(">")+1,stringInput.size() - 1));
        if (firstNumber > secondNumber)
        {
            result = "Right";
        }else
        {
            result = "Wrong";
        }
    }
    else if(stringInput.find("=")!= string::npos){
        firstNumber=stoi(stringInput.substr(0,stringInput.find("=")));
        secondNumber=stoi(stringInput.substr(stringInput.find("=")+1,stringInput.size() - 1));
        if (firstNumber == secondNumber)
        {
            result = "Right";
        }else
        {
            result = "Wrong";
        }
    }
    cout << result << endl;
    return 0;
}


