// 1. You are given a number x.
// 2. You are given another number n.
// 3. You are required to calculate x raised to the power n. Don't change the signature of power function .

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

#include <iostream>
using namespace std;

int power(int x, int n)
{
    // write your code here
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}

int main()
{
    int n, x;
    cin >> x >> n;
    cout << power(x, n);
}
