// One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×)
//  between the other three numbers; so that each operator is used only once.

// a□b□c=d
// Can you solve this tricky puzzle for him?
// Input
// Only one line containing four numbers a , b , c and d (−109≤a,b,c≤109),(−1018≤d≤1018).

// Output
// Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

// Examples
// input
// 3 4 5 23
// output
// YES
// input
// 9 5 3 7
// output
// YES
// input
// 1 2 3 1
// output
// NO

#include <iostream>
#include <string>
using namespace std;
int main()
{
    //     long long firstNum, secondNum, thirdNum,result;
    //     cin >> firstNum >> secondNum >> thirdNum >> result;

    //     if (firstNum + secondNum - thirdNum)cout<<"YES";
    //     else if (firstNum + (secondNum * thirdNum) == result)cout<<"YES";
    //     else if (firstNum - secondNum + thirdNum  == result)cout<<"YES";
    //     else if (firstNum - (secondNum * thirdNum) == result)cout<<"YES";
    //     else if ((firstNum * secondNum) + thirdNum == result)cout<<"YES";
    //     else if ((firstNum * secondNum) - thirdNum == result)cout<<"YES";
    //     else cout<<"NO";
    //     return 0;

    // another answer

    long long firstNum, secondNum, thirdNum, fourNum, result;
    bool status = false;
    std::cin >> firstNum >> secondNum >> thirdNum >> fourNum;
    char arr[] = {'+', '-', '*'};
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (arr[i] == '+')
            {
                if (arr[j] == '-' && firstNum + secondNum - thirdNum == fourNum)
                    status = true;
                if (arr[j] == '*' && firstNum + (secondNum * thirdNum) == fourNum)
                    status = true;
            }
            else if (arr[i] == '-')
            {
                if (arr[j] == '+' && firstNum - secondNum + thirdNum == fourNum)
                    status = true;
                if (arr[j] == '*' && firstNum - (secondNum * thirdNum) == fourNum)
                    status = true;
            }
            else if (arr[i] == '*')
            {
                if (arr[j] == '+' && (firstNum * secondNum) + thirdNum == fourNum)
                    status = true;
                if (arr[j] == '-' && (firstNum * secondNum) - thirdNum == fourNum)
                    status = true;
            }
            cout << status << endl;
        }
        if (status == true)
        {
            break;
        }
    }
    if (status == true)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}
