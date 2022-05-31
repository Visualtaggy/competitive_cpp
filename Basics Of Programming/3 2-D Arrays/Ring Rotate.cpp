// You are given a n*m matrix where n are the number of rows and m are the number of columns. You are also given n*m numbers representing the elements of the matrix.
// You will be given a ring number 's' representing the ring of the matrix.
// You will be given a number 'r' representing number of rotations in an anti-clockwise manner of the specified ring.
// You are required to rotate the 's'th ring by 'r' rotations and display the rotated matrix.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> arr;

    // Taking Input
    for (int i = 0; i < r; i++)
    {
        vector<int> sArr;
        for (int j = 0; j < c; j++)
        {
            int temp;
            cin >> temp;
            sArr.push_back(temp);
        }
        arr.push_back(sArr);
    }

    // Code here

    

    // Debug to Print
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}