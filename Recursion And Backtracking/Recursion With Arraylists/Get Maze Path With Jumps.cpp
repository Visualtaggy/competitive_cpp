// 1. You are given a number n and a number m representing number of rows and columns in a maze.
// 2. You are standing in the top-left corner and have to reach the bottom-right corner.
// 3. In a single move you are allowed to jump 1 or more steps horizontally (as h1, h2, .. ), or 1 or more steps vertically (as v1, v2, ..) or 1 or more steps diagonally (as d1, d2, ..).
// 4. Complete the body of getMazePath function - without changing signature - to get the list of all paths that can be used to move from top-left to bottom-right.
// Use sample input and output to take idea about output.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc)
{
    // Write your code here

    // Reaching Destination
    if (sr == dr && sc == dc)
    {
        vector<string> positiveBase;
        positiveBase.push_back("");
        return positiveBase;
    }

    vector<string> answer;

    // All Horizontal Calls
    for (int move = 1; move <= dc - sc; move++)
    {
        vector<string> h1 = get_maze_paths(sr, sc + move, dr, dc);

        for (string val : h1)
        {
            answer.push_back("h" + to_string(move) + val);
        }
    }

    // All Vertical Calls
    for (int move = 1; move <= dr - sr; move++)
    {
        vector<string> v1 = get_maze_paths(sr + move, sc, dr, dc);

        for (string val : v1)
        {
            answer.push_back("v" + to_string(move) + val);
        }
    }

    // All Diagnal Calls
    for (int move = 1; move <= dr - sr & move <= dc - sc; move++)
    {
        vector<string> d1 = get_maze_paths(sr + move, sc + move, dr, dc);
        for (string val : d1)
        {
            answer.push_back("d" + to_string(move) + val);
        }
    }

    return answer;
}

void display(vector<string> &arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i < arr.size() - 1)
            cout << ", ";
    }

    cout << "]" << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
    display(ans);

    return 0;
}