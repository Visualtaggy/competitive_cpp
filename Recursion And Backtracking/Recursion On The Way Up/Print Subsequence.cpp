// 1. You are given a string str.
// 2. Complete the body of printSS function - without changing signature - to calculate and print all subsequences of str.
// Use sample input and output to take idea about subsequences.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
#include <iostream>
using namespace std;

void printSS(string ques, string ans)
{
    // write your code here
    if (ques.size() == 0)
    {
        cout << ans << endl;
        return;
    }

    char firstChar = ques[0];
    string remainingString = ques.substr(1, ques.size());

    printSS(remainingString, ans + firstChar);
    printSS(remainingString, ans + "");
}

int main()
{
    string str;
    cin >> str;
    printSS(str, "");
}