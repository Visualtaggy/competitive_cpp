#include <iostream>
using namespace std;

int main()
{
    int row;
    int colmn;
    cin >> row >> colmn;

    // Creating 2d array
    int array[row][colmn];

    // Taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colmn; j++)
        {
            cin >> array[i][j];
        }
    }

    // Code to print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colmn; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}