// Given two person names.

// Each person has {"the first name" + "the second name"}

// Determine whether they are brothers or not.

// Note: The two persons are brothers if they share the same second name.

// Input
// First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

// Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

// Output
// Print "ARE Brothers" if they are brothers otherwise print "NOT".

// Examples
// input
// bassam ramadan
// ahmed ramadan
// output
// ARE Brothers

// input
// ali salah
// ayman salah
// output
// ARE Brothers

// input
// ali kamel
// ali salah
// output
// NOT

// the answer

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class LastWord
{
public:
    string last_word(string statement)
    {
        string segment;
        vector<string> list;
        stringstream words(statement);
        while (getline(words, segment, ' '))
        {
            list.push_back(segment);
        };
        return list.back();
    }
};

int main()
{
    std::string nameOne, nameTwo;
    getline(cin, nameOne);
    getline(cin, nameTwo);
    LastWord getLastWord;
    if (getLastWord.last_word(nameOne) == getLastWord.last_word(nameTwo))
    {
        std::cout << "ARE Brothers" << endl;
    }
    else
    {
        std::cout << "NOT" << endl;
    }
    return 0;
}
