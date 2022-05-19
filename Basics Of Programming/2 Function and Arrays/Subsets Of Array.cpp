// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to print all subsets of arr. Each subset should be
// on separate line. For more clarity check out sample input and output.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int superSets = pow(2, n);

    for (int i = 0; i < superSets; i++)
    {
        int temp = i;
        string answer = "";

        for (int j = n - 1; j >= 0; j--)
        {
            int digit = temp % 2;
            temp = temp / 2;

            if (digit == 0)
            {
                answer = "-\t" + answer;
            }
            else
            {
                answer = to_string(arr[j]) + "\t" + answer;
            }
        }
        cout << answer << endl;
    }

    return 0;
}