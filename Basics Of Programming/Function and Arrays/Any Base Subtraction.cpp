// 1. You are given a base b.
// 2. You are given two numbers n1 and n2 of base b.
// 3. You are required to subtract n1 from n2 and print the value.
#include <iostream>
#include <cmath>
using namespace std;

int getDifference(int b, int n1, int n2)
{
    // n2 - n1 ;
    int answer = 0;
    int carry = 0;
    int power = 0;
    while (n2 != 0)
    {
        int d1 = n1 % 10;
        int d2 = n2 % 10;

        int digit = 0;
        d2 += carry;
        if (d2 >= d1)
        {
            digit = d2 - d1;
            carry = 0;
        }
        else
        {
            digit = (d2 + b) - d1;
            carry = -1;
        }

        answer += pow(10, power) * digit;
        ++power;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }

    return answer;
}

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getDifference(b, n1, n2);
}