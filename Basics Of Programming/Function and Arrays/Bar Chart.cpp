// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to print a bar chart representing value of arr a.

#include <iostream>
using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int x : arr)
    {
        if (x > max)
        {
            max = x;
        }
    }

    for (int currentFloor = max; currentFloor > 0; currentFloor--)
    {
        for (int x : arr)
        {
            if (x >= currentFloor)
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }
}