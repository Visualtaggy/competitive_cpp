// 1. You are given a number n representing number of stairs in a staircase.
// 2. You are standing at the bottom of staircase. You are allowed to climb 1 step, 2 steps or 3 steps in one move.
// 3. Complete the body of getStairPaths function - without changing signature - to get the list of all paths that can be used to climb the staircase up.
// Use sample input and output to take idea about output.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> get_stair_paths(int n)
{
    // Write your code here
    // Reached Destination
    if (n == 0)
    {
        vector<string> positiveBaseCase;
        positiveBaseCase.push_back("");
        return positiveBaseCase;
    }
    // Went Ahead of Destination
    if (n < 0)
    {
        vector<string> negativeBaseCase;
        return negativeBaseCase;
    }

    // Recursive Calls for reach step 1,2,3
    vector<string> oneStep = get_stair_paths(n - 1);
    vector<string> twoStep = get_stair_paths(n - 2);
    vector<string> threeStep = get_stair_paths(n - 3);

    // Vector for final answer
    vector<string> answer;

    // Appending starting step be it 1,2 or 3
    for (string path : oneStep)
    {
        answer.push_back("1" + path);
    }
    for (string path : twoStep)
    {
        answer.push_back("2" + path);
    }
    for (string path : threeStep)
    {
        answer.push_back("3" + path);
    }

    return answer;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = get_stair_paths(n);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}