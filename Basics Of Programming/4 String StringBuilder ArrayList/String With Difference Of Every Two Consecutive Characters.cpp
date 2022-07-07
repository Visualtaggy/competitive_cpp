// 1. You are given a string that contains only lowercase and uppercase alphabets.
// 2. You have to form a string that contains the difference of ASCII values of every two consecutive characters between those characters.
//    For "abecd", the answer should be "a1b3e-2c1d", as
//    'b'-'a' = 1
//    'e'-'b' = 3
//    'c'-'e' = -2
//    'd'-'c' = 1

#include <iostream>
#include <string>

using namespace std;

void printstr(string str);

int main()
{
    string str;
    getline(cin, str);
    printstr(str);
    return 0;
}

void printstr(string str)
{
    int prev = 0;
    cout << str[prev];
    for (int i = 1; i < str.size(); i++)
    {

        cout << str[i] - str[prev];
        cout << str[i];
        ++prev;
    }
}