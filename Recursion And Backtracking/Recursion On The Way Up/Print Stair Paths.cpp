// 1. You are given a number n representing number of stairs in a staircase.
// 2. You are standing at the bottom of staircase. You are allowed to climb 1 step, 2 steps or 3 steps in one move.
// 3. Complete the body of printStairPaths function - without changing signature - to print the list of all paths that can be used to climb the staircase up.
// Use sample input and output to take idea about output.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
#include <iostream>
using namespace std;

void printStairPaths(int n, string psf)
{
    // write your code here
    // Reached destination
    if (n == 0)
    {
        cout << psf << endl;
        return;
    }
    // Crossed destination
    if (n < 0)
    {
        return;
    }

    // recursive calls
    printStairPaths(n - 1, psf + "1");
    printStairPaths(n - 2, psf + "2");
    printStairPaths(n - 3, psf + "3");
}

int main()
{

    int n;
    cin >> n;
    printStairPaths(n, "");
}