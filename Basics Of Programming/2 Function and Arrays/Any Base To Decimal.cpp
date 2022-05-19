#include <iostream>
#include <cmath>
using namespace std;
int AnyToDec(int n, int b)
{
  // write your code here.

  int power = 0;
  int total = 0;

  while (n != 0)
  {
    int digit = n % 10;
    n = n / 10;
    total += pow(b, power) * digit;
    ++power;
  }

  return total;
}
int main()
{
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}