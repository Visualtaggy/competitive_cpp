// 1. You are given a number n and a number m representing number of rows and columns in a maze.
// 2. You are standing in the top-left corner and have to reach the bottom-right corner.
// 3. In a single move you are allowed to jump 1 or more steps horizontally (as h1, h2, .. ), or 1 or more steps vertically (as v1, v2, ..) or 1 or more steps diagonally (as d1, d2, ..).
// 4. Complete the body of printMazePath function - without changing signature - to print the list of all paths that can be used to move from top-left to bottom-right.
// Use sample input and output to take idea about output.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

#include <iostream>
#include <string>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
    // write your code here
    // BaseCase
    if (sr == dr & sc == dc)
    {
        cout << psf << endl;
        return;
    }

    // Recursive Call
    if (sc < dc)
    {
        for (int move = 1; move <= dc - sc; move++)
        {
            printMazePaths(sr, sc + move, dr, dc, psf + "h" + to_string(move));
        }
    }

    if (sr < dr)
    {
        for (int move = 1; move <= dr - sr; move++)
        {
            printMazePaths(sr + move, sc, dr, dc, psf + "v" + to_string(move));
        }
    }

    if (sr < dr & sc < dc)
    {
        for (int move = 1; move <= dr - sr & move <= dc - sc; move++)
        {
            printMazePaths(sr + move, sc + move, dr, dc, psf + "d" + to_string(move));
        }
    }
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}