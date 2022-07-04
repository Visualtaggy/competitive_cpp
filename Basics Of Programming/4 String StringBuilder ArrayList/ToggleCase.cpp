// 1. You are given a string that contains only lowercase and uppercase alphabets.
// 2. You have to toggle the case of every character of the given string.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input
    string str;
    getline(cin, str);

    // code
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if (ch >= 'a' & ch <= 'z')
        {
            str[i] = 'A' + ch - 'a';
        }
        else
        {
            str[i] = 'a' + ch - 'A';
        }
    }
    cout << str;
    return 0;
}