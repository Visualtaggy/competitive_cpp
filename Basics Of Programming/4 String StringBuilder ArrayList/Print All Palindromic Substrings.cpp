// 1. You are given a string.
// 2. You have to print all palindromic substrings of the given string.

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str);

int main()
{
    // Taking input
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        // j + i since the total of final string of the loop always comes to 4 for abcc from i -> j
        for (int j = 1; j + i <= str.size(); j++)
        {
            if (isPalindrome(str.substr(i, j)))
            {
                cout << str.substr(i, j) << endl;
            }
        }
    }

    return 0;
}

bool isPalindrome(string str)
{
    int low = 0;
    int high = str.size() - 1;
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}