// 1. You are given a string str.
// 2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str.
// Use sample input and output to take idea about subsequences.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
// Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> gss(string s)
{
    if (s.size() == 0)
    {
        vector<string> empty;
        empty.push_back("");
        return empty;
    }

    // write your code here
    char ch = s[0];
    string restOfTheString = s.substr(1, s.size());

    vector<string> halfAnswer = gss(restOfTheString);
    vector<string> answer;

    for (string str : halfAnswer)
    {
        answer.push_back(str);
    }

    for (string str : halfAnswer)
    {
        answer.push_back(ch + str);
    }

    return answer;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}