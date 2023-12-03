// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

// Input
// Only one line containing a character X which will be a capital or small letter.

// Output
// Print the answer to this problem.

// Examples

// input
// a
// output
// A

// input
// A
// output
// a

// the answer

#include <iostream>
using namespace std;

int main()
{
    char input;
    cin>> input;
    int character=static_cast<int>(input);
    if (character>=65 &&character<=90)
    {
        char letter = static_cast<char>(character+32);
        cout << letter << endl;
    }
    else if(character>=97 &&character<=122)
    {
        char letter = static_cast<char>(character-32);
        cout << letter << endl;
    }
    return 0;
}
