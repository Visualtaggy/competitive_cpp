// 1. You are given a string str of digits. (will never start with a 0)
// 2. You are required to encode the str as per following rules
//     1 -> a
//     2 -> b
//     3 -> c
//     ..
//     25 -> y
//     26 -> z
// 3. Complete the body of printEncodings function - without changing signature - to calculate and print all encodings of str.
// Use the input-output below to get more understanding on what is required
// 123 -> abc, aw, lc
// 993 -> iic
// 013 -> Invalid input. A string starting with 0 will not be passed.
// 103 -> jc
// 303 -> No output possible. But such a string maybe passed. In this case print nothing.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

#include <iostream>
#include <string>
using namespace std;

void printEncoding(string str, string asf)
{
    // write your code here
    if (str.length() == 0)
    {
        cout << asf << endl;
        return;
    }

    int code1 = str[0] - '0';
    char atcode1 = char('a' + code1 - 1);
    int code2 = stoi(str.substr(0, 2));
    char atcode2 = char('a' + code2 - 1);

    if (code1 != 0)
        printEncoding(str.substr(1), asf + atcode1);
    if (code2 >= 10 && code2 <= 26)
        printEncoding(str.substr(2), asf + atcode2);
}

int main()
{
    string str;
    cin >> str;
    printEncoding(str, "");
}
