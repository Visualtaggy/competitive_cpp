// 1. You are given an ArrayList of positive integers.
// 2. You have to remove prime numbers from the given ArrayList and return the updated ArrayList.

// Note -> The order of elements should remain same.

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int number)
{
    for (int div = 2; div * div <= number; div++)
    {
        if (number % div == 0)
        {
            return false;
        }
    }

    return true;
}
void removeprimes(vector<int> &v)
{
    // write your code here
    for (int index = v.size() - 1; index >= 0; index--)
    {
        if (isPrime(v[index]))
        {
            v.erase(v.begin() + index);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    removeprimes(v);
    cout << "[";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}