#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int nod = 0;
    int temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        ++nod;
    }

    k = k % nod;
    if (k < 0)
    {
        k = k + nod;
    }

    
    int div = 1;
    int mult = 1;
    int total = 0;
    for (int i = 1; i <= nod; i++)
    {
        if (i <= k)
        {
            div = div * 10;
        }
        else
        {
            mult = mult * 10;
        }
    }
    int r = n % div;
    int q = n / div;

    total = (r * mult) + q;
    cout << total << endl;
    return 0;
}