// 1. You are given a decimal number n.
// 2. You are given a base b.
// 3. You are required to convert the number n into its corresponding value in base b.

#include <iostream>
#include <cmath>
using namespace std;
int DecToAny(int n, int b)
{
    // write your code here
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
}
int main()
{
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = DecToAny(n, b);
    cout << res << endl;
}