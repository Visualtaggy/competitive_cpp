// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are given a number x.
// 4. You are required to find the last index at which x occurs in array a.
// 5. If x exists in array, print the last index where it is found otherwise print -1.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n)
{
    // write your code here
    // base case
    if (idx == n)
    {
        return -1;
    }
    int tempIndex = lastIndex(arr, idx + 1, x, n);

    if (tempIndex == -1)
    {
        if (arr[idx] == x)
        {
            return idx;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return tempIndex;
    }
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}