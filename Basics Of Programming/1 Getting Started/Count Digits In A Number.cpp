#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0;
    while (n != 0)
    {
        n = n / 10;
        counter = counter + 1;
    }

    cout << counter << endl;
    return 0;
}