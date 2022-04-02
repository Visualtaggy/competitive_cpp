#include <iostream>

using namespace std;

int main()
{
    int low, high;
    cin >> low >> high;

    for (int number = low; number <= high; number++)
    {
        int factors = 0;

        for (int div = 2; div * div <= number; div++)
        {
            if (number % div == 0)
            {
                factors = factors + 1;
                break;
            }
        }

        if (factors == 0)
        {
            cout << number << endl;
        }
    }

    return 0;
}