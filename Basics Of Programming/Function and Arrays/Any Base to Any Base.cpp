// 1. You are given a number n.
// 2. You are given a base b1. n is a number on base b.
// 3. You are given another base b2.
// 4. You are required to convert the number n of base b1 to a number in base b2.

#include <iostream>
#include <cmath>
using namespace std;

int AnyToDecimal(int n, int b);
int DecimalToAnyBase(int n, int b);

int AnyToAny(int n, int b1, int b2)
{
    // write your code here
    int decimalValue = AnyToDecimal(n, b1);
    return DecimalToAnyBase(decimalValue, b2);
}
int main()
{
    int n;
    int b1;
    int b2;
    cin >> n;
    cin >> b1;
    cin >> b2;
    int res = AnyToAny(n, b1, b2);
    cout << res << endl;
}
int AnyToDecimal(int n, int b)
{
    int power = 0;
    int total = 0;

    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        total += pow(b, power) * digit;
        ++power;
    }
    return total;
};

int DecimalToAnyBase(int n, int b)
{
    int total = 0;
    int power = 0;
    while (n != 0)
    {
        int digit = n % b;
        n = n / b;
        total += pow(10, power) * digit;
        ++power;
    }
    return total;
};