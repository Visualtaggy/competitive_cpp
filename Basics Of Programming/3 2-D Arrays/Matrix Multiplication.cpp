// 1. You are given a number n1, representing the number of rows of 1st matrix.
// 2. You are given a number m1, representing the number of columns of 1st matrix.
// 3. You are given n1*m1 numbers, representing elements of 2d array a1.
// 4. You are given a number n2, representing the number of rows of 2nd matrix.
// 5. You are given a number m2, representing the number of columns of 2nd matrix.
// 6. You are given n2*m2 numbers, representing elements of 2d array a2.
// 7. If the two arrays representing two matrices of dimensions n1 * m1 and n2 * m2 can be multiplied, display the contents of prd array as specified in output Format.
// 8. If the two arrays can't be multiplied, print "Invalid input".

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Matrix 1
    int r1;
    int c1;
    cin >> r1 >> c1;
    vector<vector<int>> one;

    for (int i = 0; i < r1; i++)
    {
        vector<int> sOne;
        for (int j = 0; j < c1; j++)
        {
            int element;
            cin >> element;
            sOne.push_back(element);
        }
        one.push_back(sOne);
    }

    // Matrix 2
    int r2;
    int c2;
    cin >> r2 >> c2;
    vector<vector<int>> two;

    for (int i = 0; i < r2; i++)
    {
        vector<int> sTwo;
        for (int j = 0; j < c2; j++)
        {
            int element;
            cin >> element;
            sTwo.push_back(element);
        }
        two.push_back(sTwo);
    }

    if (c1 != r2)
    {
        cout << "Invalid input";
    }
    else
    {
        vector<vector<int>> product;

        for (int i = 0; i < r1; i++)
        {
            vector<int> sProduct;
            for (int j = 0; j < c2; j++)
            {
                int val = 0;
                for (int k = 0; k < c1; k++)
                {
                    val += one[i][k] * two[k][j];
                }
                sProduct.push_back(val);
            }
            product.push_back(sProduct);
        }

        // print debug
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << product[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}