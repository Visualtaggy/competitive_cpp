#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int low = 0;
    int high = sizeof(numbers) / sizeof(numbers[0]) - 1;
    int find = 90;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (numbers[mid] == find)
        {
            cout << mid;
            return 0;
        }
        else if (numbers[mid] < find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return 0;
}