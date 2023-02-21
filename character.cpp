#include <iostream>
using namespace std;

/**
 * Character 1 Byte
 */

int main()
{
    // char N = "Z"; ERROR don't use ""
    char N = 'Z';
    cout << sizeof(N) << endl;
    char d = '\097';
    cout << d << endl;
    char b = '(';
    cout << int(b) << endl; // return ASCII code

    string f = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        cout << char(int(f[i])) << ": " << int(f[i]) << endl;
    }

    return 0;
}
