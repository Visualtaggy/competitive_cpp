#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int temp = number;
    int counter = 0;

    while (temp != 0)
    {
        ++counter;
        temp = temp / 10;
    }

    int power = pow(10, counter - 1);

    while (number != 0)
    {
        cout << number / power << endl;
        number = number % power;

        power = power / 10;
    }

    return 0;
}