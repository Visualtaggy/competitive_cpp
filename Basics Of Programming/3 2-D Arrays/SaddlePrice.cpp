// 1. You are given a square matrix of size 'n'. You are given n*n elements of the square matrix.
// 2. You are required to find the saddle price of the given matrix and print the saddle price.
// 3. The saddle price is defined as the least price in the row but the maximum price in the column of the matrix.

#include <iostream>
#include <vector>
using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    // write your code here
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    saddle_point(n, arr);
}