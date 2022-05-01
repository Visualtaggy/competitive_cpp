// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to calculate the inverse of array a.

// For definition and constraints check this link
// https://www.pepcoding.com/resources/online-java-foundation/getting-started/inverse-of-a-number/ojquestion
// The only difference is the range of values is from 0 to n - 1, instead of 1 to n.

#include <iostream>
using namespace std;

int *inverse(int *arr, int n)
{
    // write your code here
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *inv = inverse(arr, n);
    display(inv, n);
}