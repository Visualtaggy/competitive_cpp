// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers (1's and 0's), representing elements of 2d array a.
// 4. Consider this array a maze and a player enters from top-left corner in east direction.
// 5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
// 6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.

// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a.
// 4. You are required to traverse and print the contents of the 2d array in form of a spiral.
// Note - Please check the sample output for details.
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

    int dir = 0;
    int i = 0;
    int j = 0;

    while (true)
    {
        dir = (dir + arr[i][j]) % 4;

        // travel
        switch (dir)
        {
        case 0:
            j++;
            break;
        case 1:
            i++;
            break;
        case 2:
            j--;
            break;
        case 3:
            i--;
            break;
        }

        // exit
        if (i < 0)
        {
            i++;
            break;
        }
        else if (j < 0)
        {
            j++;
            break;
        }
        else if (i > arr.size() - 1)
        {
            i--;
            break;
        }
        else if (j > arr[0].size() - 1)
        {
            j--;
            break;
        }
    }
    cout << i << endl;
    cout << j << endl;
    return 0;
}