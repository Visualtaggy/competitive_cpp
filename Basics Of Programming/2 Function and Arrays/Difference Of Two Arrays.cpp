// 1. You are given a number n1, representing the size of array a1.
// 2. You are given n1 numbers, representing elements of array a1.
// 3. You are given a number n2, representing the size of array a2.
// 4. You are given n2 numbers, representing elements of array a2.
// 5. The two arrays represent digits of two numbers.
// 6. You are required to find the difference of two numbers represented by two arrays and print the arrays. a2 - a1

// Assumption - number represented by a2 is greater.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    int *a1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cin >> n2;
    int *a2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    // write your code here
    int answer[n2];

    int carry = 0;
    int i = n1 - 1;
    int j = n2 - 1;
    int k = n2 - 1;
    int lengthOfK = k;

    while (k >= 0)
    {
        int digit = 0;
        int subValue = i < 0 ? 0 : a1[i];
        if (a2[j] + carry >= subValue)
        {
            digit = (a2[j] + carry) - subValue;
            carry = 0;
        }
        else
        {
            digit = (a2[j] + carry + 10) - subValue;
            carry = -1;
        }

        answer[k] = digit;
        --i;
        --j;
        --k;
    }

    int index = 0;
    while(index <= lengthOfK){ 
        if(answer[index] == 0){
            index++;
        }else{
            break;
        }
    }
    
    while(index <= lengthOfK){
        cout << answer[index] <<endl;
        index++;
    }

} 