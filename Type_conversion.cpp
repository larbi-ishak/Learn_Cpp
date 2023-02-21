#include <iostream>
using namespace std;

// type conversion or type casting
// explicit by the developer
// implicit by the compiler

int main()
{
    int a = 9;
    double b = 7.8;

    a = b;

    cout << a << endl; // implicit conversion double to int throwing the comma
    cout << sizeof(a) << " bytes" << endl;

    cout << "-------------" << endl;
    char c = 'C';
    int d = 20;
    cout << int(c) << endl; // 67
    // type casting
    cout << c + d << endl;

    cout << "-------------" << endl;

    int e = 20;
    double f = 20.5;
    cout << e + f << endl;
    cout << e + int(f) << endl; // two ways of casting
    cout << e + (int)f << endl;

    return 0;
}
