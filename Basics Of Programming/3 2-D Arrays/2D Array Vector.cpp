#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr;
    int r;
    int c;

    cin >> r;
    cin >> c;

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