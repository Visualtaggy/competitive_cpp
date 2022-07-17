#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> keyPad = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

vector<string> getKPC(string s)
{
    // Write your code here

    // BaseCase
    if (s.size() == 0)
    {
        vector<string> emptyVector;
        emptyVector.push_back("");
        return emptyVector;
    }

    // Removing first number 1 from 1-2-3
    char firstNum = s[0];
    // keeping seprate string 2-3
    string ros = s.substr(1, s.size());
    // recursive call on 2-3
    vector<string> halfAnswer = getKPC(ros);
    vector<string> answer;

    int index = firstNum - '0'; // Casting into int '1'  -> 1

    // Looping for all the chars in that that number  1 -> 'abc' so the loop will run 3 times
    for (int i = 0; i < keyPad[index].size(); i++)
    {
        char ch = keyPad[index].at(i); // for 1 we will just store 'a' here
        for (string str : halfAnswer)
        {
            // a + ros (ros will be coming resursively)
            answer.push_back(ch + str);
        }
    }

    return answer;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
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