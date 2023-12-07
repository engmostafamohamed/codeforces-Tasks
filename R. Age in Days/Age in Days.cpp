// Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

// Note: consider the whole year has 365 days and 30 days per month.

// Input
// Only one line containing a number N (0 ≤ N ≤ 106).

// Output
// Print the output, like the following examples.

// Examples

// input
// 400
// output
// 1 years
// 1 months
// 5 days

// input
// 800
// output
// 2 years
// 2 months
// 10 days

// input
// 30
// output
// 0 years
// 1 months
// 0 days

// the answer
#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long years=0, months=0, days=0, number;
    cin >> number;
    if (number >= 365)
    {
        years = static_cast<int>(number / 365);
        number = number - (years*365);
    }
    if (number >= 30)
    {
        months = static_cast<int>(number / 30);
        number = number - (months*30);
    }
    days = number;
    cout << years <<" years" << endl;
    cout << months <<" months" << endl;
    cout << days <<" days" << endl;
}