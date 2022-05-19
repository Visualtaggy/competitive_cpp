// 1. You are given a number n1, representing the size of array a1.
// 2. You are given n1 numbers, representing elements of array a1.
// 3. You are given a number n2, representing the size of array a2.
// 4. You are given n2 numbers, representing elements of array a2.
// 5. The two arrays represent digits of two numbers.
// 6. You are required to add the numbers represented by two arrays and print the
// arrays.

#include <iostream>

using namespace std;

int main()
{
    int n1;
    cin >> n1;

    int a1[n1];
    for (int index = 0; index < n1; index++)
    {
        cin >> a1[index];
    }

    int n2;
    cin >> n2;

    int a2[n2];
    for (int index = 0; index < n2; index++)
    {
        cin >> a2[index];
    }

    int sum[n1 > n2 ? n1 : n2];

    int i = n1 - 1;
    int j = n2 - 1;
    int k = sizeof(sum) / sizeof(sum[0]) - 1;
    int carry = 0;

    while (k >= 0)
    {
        // copying value of carry
        int digit = carry;

        if (i >= 0)
        {
            digit += a1[i];
        }

        if (j >= 0)
        {
            digit += a2[j];
        }

        carry = digit / 10;
        digit = digit % 10;
        sum[k] = digit;

        --i;
        --j;
        --k;
    }

    if (carry != 0)
    {
        cout << carry << endl;
    }

    for (int val : sum)
    {
        cout << val << endl;
    }

    return 0;
}