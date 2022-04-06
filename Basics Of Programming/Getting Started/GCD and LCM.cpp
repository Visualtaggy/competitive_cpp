#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int a = n1;
    int b = n2;

    while (n1 % n2 != 0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    cout << n2 << endl;
    cout << (a * b) / n2 << endl;
    return 0;
}