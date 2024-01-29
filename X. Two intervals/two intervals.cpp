// Given the boundaries of 2 intervals. Print the boundaries of their intersection.

// Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

// Input
// Only one line contains two intervals [l1,r1], [l2,r2] where (1≤l1,l2,r1,r2≤109), (l1≤r1,l2≤r2) .
// It's guaranteed that l1≤r1 and l2≤r2 .

// Output
// If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.

// Examples
// input
// 1 15 5 27
// output
// 5 15
// input
// 2 5 6 12
// output
// -1

// the answer

#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long L1,R1,L2,R2,startNum,endNum;
    cin >> L1 >> R1 >> L2 >> R2;
    if (L1 <= L2 && R1 >= R2)
    {
        startNum=L2;
        endNum=R2;
        cout << startNum << " " << endNum << endl;
    }else if (L2 <= L1 && R2 >= R1){
        startNum=L1;
        endNum=R1;
        cout << startNum << " " << endNum << endl;
    }else if (L1 <= L2 || R1 >= R2){
        if(L1 <=R2 && R1 >= R2){
            startNum=L1;
            endNum=R2;
            cout << startNum << " " << endNum << endl;
        }
        else if (L2 <= R1 && R2 >= R1)
        {
            startNum=L2;
            endNum=R1;
            cout << startNum << " " << endNum << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
