// 1. You are given a string str.
// 2. Complete the body of printPermutations function - without changing signature - to calculate and print all permutations of str.
// Use sample input and output to take idea about permutations.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

#include <iostream>
#include <string>
using namespace std;

void printPermutations(string str, string asf)
{
    // write your code here
    if (str.size() == 0)
    {
        cout << asf << endl;
        return;
    }

    for (int i = 0; i < str.size(); i++)
    {
        // Removing 'a' from 'abc'
        char ch = str[i];

        // taking left side of the remaining string => 'b'
        string left = str.substr(0, i);

        // taking right side of the remaining string => 'c'
        string right = str.substr(i + 1, str.size());

        // Combining to form => 'ac'
        string combined = left + right;

        // recusive call
        printPermutations(combined, asf + ch);
    }
}

int main()
{
    string str;
    cin >> str;
    printPermutations(str, "");
}