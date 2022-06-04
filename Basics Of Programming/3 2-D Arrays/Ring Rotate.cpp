// You are given a n*m matrix where n are the number of rows and m are the number of columns. You are also given n*m numbers representing the elements of the matrix.
// You will be given a ring number 's' representing the ring of the matrix.
// You will be given a number 'r' representing number of rotations in an anti-clockwise manner of the specified ring.
// You are required to rotate the 's'th ring by 'r' rotations and display the rotated matrix.

#include <iostream>
#include <vector>

using namespace std;

// functions
void display(vector<vector<int>> arr, int r, int c);
vector<int> extractShell(vector<vector<int>> arr, int shell);
vector<int> reverse(vector<int> arr);
void rotateOneDArray(vector<int> &arr, int rotate);

int main()
{
    int r, c, shell, rotate;
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
    display(arr, r, c);
    cin >> shell >> rotate;

    // taking elements from main array
    vector<int> shellExtract = extractShell(arr, shell);

    // rotating the array based on user input
    rotateOneDArray(shellExtract, rotate);
    cout << endl;

    for (int i = 0; i < shellExtract.size(); i++)
    {
        cout << shellExtract[i] << " ";
    }

    return 0;
}
void reverse(vector<int> &arr, int low, int high)
{

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        ++low;
        --high;
    }

    // DEBUG PRINT
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
}

void rotateOneDArray(vector<int> &arr, int rotate)
{
    reverse(arr, 0, arr.size() - 1 - rotate);
    reverse(arr, arr.size() - rotate, arr.size() - 1);
    reverse(arr, 0, arr.size() - 1);
}

vector<int> extractShell(vector<vector<int>> arr, int shell)
{
    vector<int> extractedShell;
    int minR = shell - 1;
    int minC = shell - 1;
    int maxR = arr.size() - shell;
    int maxC = arr[0].size() - shell;

    // THIS IS NOT NEEDED FOR VECTORS BUT will be needed if you use arrays and need to find size on 1D array
    //   int totalElements = 2 * (maxR - minR + maxC - minC); // high  - low + 1 to get total number of elements

    // left wall
    for (int i = minR, j = minC; i <= maxR; i++)
    {
        extractedShell.push_back(arr[i][j]);
    }
    ++minC; // to avoid repeat

    // botton wall
    for (int i = maxR, j = minC; j <= maxC; j++)
    {
        extractedShell.push_back(arr[i][j]);
    }
    --maxR;
    // right wall
    for (int i = maxR, j = maxC; i >= minR; i--)
    {
        extractedShell.push_back(arr[i][j]);
    }
    --maxC;
    // top wall
    for (int i = minR, j = maxC; j >= minC; j--)
    {
        extractedShell.push_back(arr[i][j]);
    }

    // DEBUG PRINT
    for (int i = 0; i < extractedShell.size(); i++)
    {
        cout << extractedShell[i] << " ";
    }

    return extractedShell;
}

void display(vector<vector<int>> arr, int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}