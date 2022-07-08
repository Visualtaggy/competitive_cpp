// 1. You are given a string.
// 2. You have to print all permutations of the given string iteratively.

#include <iostream>
#include <string>

using namespace std;

int factorial(int number);

int main()
{
    string str;
    getline(cin, str);

    int n = str.size();
    int f = factorial(n);

    for (int i = 0; i < f; i++)
    {
        string sb = str;
        int temp = i;
        for (int div = n; div >= 1; div--)
        {
            int q = temp / div;
            int r = temp % div;

            cout << sb[r];
            sb.erase(r, 1);

            temp = q;
        }
        cout << endl;
    }
    return 0;
}

int factorial(int number)
{
    int answer = 1;

    for (int i = 2; i <= number; i++)
    {
        answer *= i;
    }

    return answer;
}