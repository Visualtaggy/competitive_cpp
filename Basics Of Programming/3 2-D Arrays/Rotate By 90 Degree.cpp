// 1. You are given a number n, representing the number of rows and number of columns.
// 2. You are given n*n numbers, representing elements of 2d array a.
// 3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
// *Note - you are required to do it in-place i.e. no extra space should be used to achieve it .*

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr;
    int r;
    int c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        vector<int> sArr;
        for (int j = 0; j < c; j++)
        {
            int element;
            cin >> element;
            sArr.push_back(element);
        }
        arr.push_back(sArr);
    }

    // Code goes here

    return 0;
}