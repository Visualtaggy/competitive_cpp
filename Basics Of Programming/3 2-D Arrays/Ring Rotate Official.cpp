// You are given a n*m matrix where n are the number of rows and m are the number of columns. You are also given n*m numbers representing the elements of the matrix.
// You will be given a ring number 's' representing the ring of the matrix.
// You will be given a number 'r' representing number of rotations in an anti-clockwise manner of the specified ring.
// You are required to rotate the 's'th ring by 'r' rotations and display the rotated matrix.

#include <iostream>
#include <vector>

using namespace std;

void displayOneD(vector<int> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        cout << matrix[i] << " ";
    }
    cout << endl;
}

void display(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> getOneDFromMatrix(vector<vector<int>> &matrix, int s)
{
    int minr = s - 1;
    int minc = s - 1;
    int maxr = matrix.size() - s;
    int maxc = matrix[0].size() - s;

    vector<int> arr;

    // left
    for (int i = minr, j = minc; i <= maxr; i++)
    {
        arr.push_back(matrix[i][j]);
    }

    // buttom
    for (int i = maxr, j = minc + 1; j <= maxc; j++)
    {
        arr.push_back(matrix[i][j]);
    }

    // right
    for (int i = maxr - 1, j = maxc; i >= minr; i--)
    {
        arr.push_back(matrix[i][j]);
    }

    // top
    for (int i = minr, j = maxc - 1; j >= minc + 1; j--)
    {
        arr.push_back(matrix[i][j]);
    }

    return arr;
}

void reverse(vector<int> &matrix, int l, int h)
{
    while (l < h)
    {
        int temp = matrix[l];
        matrix[l] = matrix[h];
        matrix[h] = temp;

        l++;
        h--;
    }
}

void rotate(vector<int> &matrix, int r)
{
    r = r % matrix.size();
    if (r < 0)
    {
        r = r + matrix.size();
    }

    reverse(matrix, 0, matrix.size() - 1 - r);
    reverse(matrix, matrix.size() - r, matrix.size() - 1);
    reverse(matrix, 0, matrix.size() - 1);
}

void fillShell(vector<vector<int>> &matrix, vector<int> arr, int s)
{
    int minr = s - 1;
    int minc = s - 1;
    int maxr = matrix.size() - s;
    int maxc = matrix[0].size() - s;

    int index = 0;
    // left
    for (int i = minr, j = minc; i <= maxr; i++)
    {
        matrix[i][j] = arr[index];
        index++;
    }

    // buttom
    for (int i = maxr, j = minc + 1; j <= maxc; j++)
    {
        matrix[i][j] = arr[index];
        index++;
    }

    // right
    for (int i = maxr - 1, j = maxc; i >= minr; i--)
    {
        matrix[i][j] = arr[index];
        index++;
    }

    // top
    for (int i = minr, j = maxc - 1; j >= minc + 1; j--)
    {
        matrix[i][j] = arr[index];
        index++;
    }
}

int main()
{
    int n, m, s, r;
    cin >> n >> m;

    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> sMatrix;
        for (int j = 0; j < m; j++)
        {
            int element;
            cin >> element;
            sMatrix.push_back(element);
        }
        matrix.push_back(sMatrix);
    }
    cin >> s >> r;

    cout << endl;
    cout << "QUESTION: " << endl;
    display(matrix);

    cout << endl;
    cout << "EXTRACT: " << endl;
    vector<int> oneD = getOneDFromMatrix(matrix, s);
    displayOneD(oneD);

    cout << endl;
    cout << "ROTATE: " << endl;
    rotate(oneD, r);
    displayOneD(oneD);

    cout << endl;
    cout << "ANSWER: " << endl;
    fillShell(matrix, oneD, s);
    display(matrix);

    return 0;
}