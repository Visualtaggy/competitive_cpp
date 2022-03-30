// 1. You've to check whether a given number is prime or not.
// 2. Take a number "t" as input representing count of input numbers to be tested.
// 3. Take a number "n" as input "t" number of times.
// 4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int number;
        

    for (int i = 0; i < t; i++)
    {
        cin >> number;
        int factors = 0;
        
        for (int div = 2; div * div <= number; div++)
        {

            if (number % div == 0)
            {
                ++factors;
                break;
            }
        }

        if (factors == 0)
        {
            cout << "prime" << endl;
        }

        else
        {
            cout << "not prime" << endl;
        }
    }

    return 0;
}