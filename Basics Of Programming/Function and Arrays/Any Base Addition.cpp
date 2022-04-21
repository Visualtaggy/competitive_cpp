// 1. You are given a base b.
// 2. You are given two numbers n1 and n2 of base b.
// 3. You are required to add the two numbes and print their value in base b.

#include <iostream>
#include <cmath>
using namespace std;

int getSum(int b, int n1, int n2)
{
    int answer = 0;
    int carry = 0;
    int power = 0;

    while (n1 != 0 || n2 != 0 || carry != 0)
    {
        int d1 = n1 % 10;
        int d2 = n2 % 10;

        int sum = d1 + d2 + carry;
        carry = sum / b;
        sum = sum % b;
        answer += pow(10, power) * sum;
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
    cout << getSum(b, n1, n2) << endl;
}