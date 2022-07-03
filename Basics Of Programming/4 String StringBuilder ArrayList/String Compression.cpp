// 1. You are given a string.
// 2. You have to compress the given string in the following two ways -
//    First compression -> The string should be compressed such that consecutive duplicates of characters are replaced with a single character.
//    For "aaabbccdee", the compressed string will be "abcde".
//    Second compression -> The string should be compressed such that consecutive duplicates of characters are replaced with the character and followed by the number of consecutive duplicates.
//    For "aaabbccdee", the compressed string will be "a3b2c2de2".

#include <iostream>
#include <string>

using namespace std;

void compression1(string str);
void compression2(string str);

int main()
{
    string str;
    getline(cin, str);

    // Code
    compression1(str);
    cout << endl;
    compression2(str);
    return 0;
}

void compression1(string str)
{
    int index = 0;
    while (index < str.size())
    {
        while (str[index] == str[index + 1] && index < str.size() - 1)
        {
            ++index;
        }
        cout << str[index];
        ++index;
    }
}

void compression2(string str)
{
    int index = 0;
    while (index < str.size())
    {
        int counter = 1;
        while (str[index] == str[index + 1] && index < str.size() - 1)
        {
            ++index;
            ++counter;
        }
        if (counter > 1)
        {
            cout << str[index] << counter;
        }
        else
        {
            cout << str[index];
        }
        ++index;
    }
}