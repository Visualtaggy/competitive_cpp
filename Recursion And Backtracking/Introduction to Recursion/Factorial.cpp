// 1. You are given a number n.
// 2. You are required to calculate the factorial of the number. Don't change the signature of factorial function.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

#include <iostream>
using namespace std;

int factorial(int n)
{
    // write your code here

    if (n == 0)
    {
        return 1;
    }

    int answer = n * factorial(n - 1);

    return answer;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}