#include <iostream>
#include <limits.h>
using namespace std;

// Modifiers
// modifying the length  of the data reducing or increasing for performance and other purposes
// signed : store positive negative and 0
// int is signed by default
// unsigned : store only positive values
// Type Alias:
// two syntax: 1- using identifier_name =type
//             2- typedef type identifier_name

int main()
{

    int age = 900;
    short int my_age = 9;

    cout << sizeof(age) << endl;    // 4 bytes
    cout << sizeof(my_age) << endl; // 2 bytes

    cout << "-----------------------" << endl;

    cout << sizeof(short) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(long long) << endl;

    cout << "-----------------------" << endl;

    signed int t = -4;
    unsigned int k = -4;

    cout << t << endl;
    cout << k << endl; // when trying to print it comes a disaster catastrophe number

    cout << "-----------------------" << endl;

    long long int g = 108909093;

    using hugeNum = long long int;
    typedef long long int bigNum;

    hugeNum c = 129847;
    cout << c << endl;

    bigNum h = 129847;
    cout << h << endl;

    system("pause");
    return 0;
}
