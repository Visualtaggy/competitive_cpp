#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int div = 2;
    while (div < n)
    {
        if (n % div == 0)
        {
            cout << div << " ";
            n = n / div;
        }
        else
        {
            ++div;
        }
    }

    if (n != 1)
    {
        cout << n << "";
    }
}
