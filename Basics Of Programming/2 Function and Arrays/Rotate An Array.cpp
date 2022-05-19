// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are given a number k.
// 4. Rotate the array a, k times to the right (for positive values of k), and to
// the left for negative values of k.

#include <iostream>
using namespace std;

void reverse(int *arr,int low, int high)
{
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        ++low;
        --high;
    }
}

void rotate(int *arr, int n, int k)
{
    k = k % n;
    if(k < 0){
        k = k + n;
    }
    // write your code here
    reverse(arr, 0, n - 1 - k);
    reverse(arr, n - k, n -1 );
    reverse(arr, 0, n - 1);
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, r;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> r;

    rotate(arr, n, r);
    display(arr, n);
}