// 1. You are given an array of size 'n' and n elements of the same array.
// 2. You are required to find and print all the subarrays of the given array.
// 3. Each subarray should be space seperated and on a seperate lines. Refer to sample input and output.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // write your code here

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int printVal = start; printVal <= end; printVal++)
            {
                cout << arr[printVal] << "\t";
            }
             cout << endl;
        }
       
    }
}