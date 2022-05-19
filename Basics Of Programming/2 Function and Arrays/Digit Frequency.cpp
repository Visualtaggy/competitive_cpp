// 1. You are given a number n.
// 2. You are given a digit d.
// 3. You are required to calculate the frequency of digit d in number n.

#include <iostream>
using namespace std;
int digFreq(int n, int d)
{
    // write your code here
    int counter = 0;
    while (n != 0)
    {
        int current = n % 10;

        if (current == d)
        {
            ++counter;
        }

        n = n / 10;
    }

    return counter;
}
int main()
{
    int n, d;
    cin >> n >> d;
    int res = digFreq(n, d);
    cout << res << endl;
}