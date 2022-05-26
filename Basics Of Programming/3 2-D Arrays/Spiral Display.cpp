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

    // starting row
    int minR = 0;
    // starting coll
    int minC = 0;
    // end row
    int maxR = arr.size() - 1;
    // end coll
    int maxC = arr[0].size() - 1;

    int totalElements = r * c;
    int visited = 0;

    while (visited < totalElements)
    {

        // left wall
        for (int i = minR, j = minC; i <= maxR && visited < totalElements; i++)
        {
            cout << arr[i][j] << endl;
            ++visited;
        }
        minC++;

        // bottom wall
        for (int i = maxR, j = minC; j <= maxC && visited < totalElements; j++)
        {
            cout << arr[i][j] << endl;
            ++visited;
        }
        maxR--;

        // right wall
        for (int i = maxR, j = maxC; i >= minR && visited < totalElements; i--)
        {
            cout << arr[i][j] << endl;
            ++visited;
        }
        maxC--;

        // top wall
        for (int i = minR, j = maxC; j >= minC && visited < totalElements; j--)
        {
            cout << arr[i][j] << endl;
            ++visited;
        }

        minR++;
    }

    return 0;
}