// Given 4 numbers A , B , C and D . Print the last 2 digits from their Multiplication.

// Input
// Only one line containing four numbers A , B , C and D (2≤A,B,C,D≤109) .

// Output
// Print the last 2 digits from their Multiplication.

// Examples
// input
// 5 7 2 4
// output
// 80
// input
// 3 9 9 9
// output
// 87
// Note
// First Example :

// the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280 so the answer will be the last 2 digits which are 80.

// Second Example :

// the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187 so the answer will be the last 2 digits which are 87.

// the answer

#include <iostream>
#include <vector>
#include <string>
using namespace std;
string multiplyLargeNumber(const string&num1,const string&num2){
    int sizeOne=num1.size();
    int sizeTwo=num2.size();
    vector<int>arr(num1.length()+num2.length());
    for (int  i =num1.size()-1 ; i >=0; i--)
    {
        for (int  j =num2.size()-1 ; j >=0; j--)
        {
            int multiply=(num1[i]-'0')*(num2[j]-'0');
            int sum=arr[i+j+1]+multiply;
            arr[i+j+1]=sum%10;
            arr[i+j]+=sum/10;
        }
    }
    string result;
    for(int digit :arr){
        result+=to_string(digit);
    }
    result.erase(0, result.find_first_not_of('0'));
    return result;
}
int main()
{
    string  num1,num2,num3,num4;
    cin >> num1 >> num2 >> num3 >> num4;
    string result=multiplyLargeNumber(num1,num2);
    result=multiplyLargeNumber(num3,result);
    result=multiplyLargeNumber(num4,result);
    cout<< result.substr(result.length()-2);
    return 0;
}
