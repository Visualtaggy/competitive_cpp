// 1. You are given a number n and a number m representing number of rows and columns in a maze.
// 2. You are standing in the top-left corner and have to reach the bottom-right corner. Only two moves are allowed 'h' (1-step horizontal) and 'v' (1-step vertical).
// 3. Complete the body of getMazePath function - without changing signature - to get the list of all paths that can be used to move from top-left to bottom-right.
// Use sample input and output to take idea about output.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
#include <iostream>
#include <vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
    //Reaching Destination
    if (sr == dr && sc == dc)
    {
        vector<string> positiveBase;
        positiveBase.push_back("");
        return positiveBase;
    }
    //Falling Behind the board
    if (sr > dr || sc > dc)
    {
        vector<string> negativeBase;
        return negativeBase;
    }
    //Recursive Calls for movement
    vector<string> onlyH = getMazePaths(sr, sc + 1, dr, dc);
    vector<string> onlyV = getMazePaths(sr + 1, sc, dr, dc);
    //DataStructre to store the answer
    vector<string> answer;

    //Adding initial move infront of recursive solution
    for (string val : onlyH)
    {
        answer.push_back("h" + val);
    }
    for (string val : onlyV)
    {
        answer.push_back("v" + val);
    }
    
    //Returning answer
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
    vector<string> ans = getMazePaths(0, 0, n - 1, m - 1);
    display(ans);

    return 0;
}