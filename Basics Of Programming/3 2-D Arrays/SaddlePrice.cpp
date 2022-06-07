#include <iostream>
#include <vector>
using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    // write your code here

    for (int i = 0; i < arr.size(); i++)
    {
        int champ = 0;
        for (int j = 1; j < arr[0].size(); j++)
        {
            if (arr[i][champ] > arr[i][j])
            {
                champ = j;
            }
        }
        bool flag = true;
        for (int k = 0; k < arr.size(); k++)
        {
            if (arr[i][champ] < arr[k][champ])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i][champ] << endl;
            return;
        }
    }
    cout << "Invalid input" << endl;
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