// A. Winter Sale

// The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
//  and its price P
//  after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

// Input
// Only one line containing two numbers X
//  and P
//  (1≤X≤99,1≤P≤4×104
// ) – the discount percentage, and the price of the T-shirt after the discount.

// Output
// Print the price of the T-shirt before the discount rounded up to two decimal places.

// Examples
// input
// 20 80
// output
// 100.00
// input
// 15 20
// output
// 23.53


// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main (){
//     long long  priseAfterDiscount,priseBeforeDiscount;
//     float discount;
//     cin>> priseAfterDiscount >>discount;
//     priseBeforeDiscount=priseAfterDiscount/(1-(discount/100));
//     cout <<setprecision (2) << fixed << priseBeforeDiscount << endl;
//     return 0; 
// }



#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long priseAfterDiscount;
    float discount;
    cin  >> discount>>priseAfterDiscount;
    double priseBeforeDiscount = priseAfterDiscount / (1 - (discount / 100));
    cout << std::fixed << std::setprecision(2) << priseBeforeDiscount << endl;
    return 0;
}