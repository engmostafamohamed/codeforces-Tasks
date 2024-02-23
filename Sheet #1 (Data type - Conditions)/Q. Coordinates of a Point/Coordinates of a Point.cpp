// Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

// Note:

// Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
// Print "Origem" If the point is at the origin.
// Print "Eixo X" If the point is over X axis.
// Print "Eixo Y" if the point is over Y axis.

// Input
// Only one line containing two numbers X, Y ( - 1000 ≤ X, Y ≤ 1000).

// Output
// Print the answer to problem above.

// Examples
// input
// 4.5 -2.2
// outputCopy
// Q4

// input
// 0.1 0.1
// output
// Q1


// the answer
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double x_axis,y_axis;
    cin >> x_axis>>y_axis;
    if (x_axis ==0.0 || y_axis ==0.0)
    {
        if (x_axis ==0.0 && y_axis ==0.0){
            cout << "Origem" << endl;
        }else if (x_axis ==0.0)
        {
            cout << "Eixo Y" << endl;
        }else
        {
            cout << "Eixo X" << endl;
        }
    }
    else if(x_axis >0.0)
    {
        if (y_axis >0.0)
        {
            cout << "Q1" << endl;
        }else
        {
            cout << "Q4" << endl;
        }   
    }
    else if(x_axis <0.0)
    {
        if (y_axis >0.0)
        {
            cout << "Q2" << endl;
        }else
        {
            cout << "Q3" << endl;
        }
    }
}