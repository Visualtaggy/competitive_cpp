#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    // used to get full lines with spaces because cin >> str; would give "hello" instead of "hello world!"
    getline(cin, str);
    cout << str << endl;
    cout << str[0] << endl; // you can index any specific char
    str[0] = 'y';
    cout << str << endl; // update any char at any index!

    // Built-in functions
    str.insert(0, "Welcome to my "); // adds full strings to that char index
    cout << str << endl;
    cout << str.find("my") << endl; // 'm' is on 11 in 'my' hence prints 11
    cout << str.substr(0, 7) << endl;
    return 0;
}