#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Bit : binary digit
 * Byte: 8 bits : single character
 * int : 2 or 4 bytes
 * float 4 bytes , double 8 bytes
 * best practice when dealing with larger number is to use double
 * char , boolean both allocates 1 Byte
 *
 */

int main()
{
    cout << setprecision(15);
    float m = 1.1234567891;
    double l = 1.123456789154684849494;
    cout << m << "\n";
    cout << l << "\n";

    // we can use type infer so the compiler deduce the type of variable
    auto name = "larbi ishak";
    cout << name << endl;
    cout << "memory location \t" << &name;
    cout << sizeof(name);

    // auto var; ERROR every auto has to have an initializer

    return 0;
}
