#include <iostream>
using namespace std;

// Data types
/**
 * integer
 * string
 * float
 * boolean
 * array
 * object
 */

int main()
{

    string ahmed = "Ahmed";
    cout << "name is " << ahmed;
    cout << "\n size of name is " << sizeof(ahmed);
    cout << "\naddress is "
         << &ahmed;
    // cout << &ahmed;
    cout << "\n";

    int m[2] = {8, 9};
    cout << "address of table is:" << m;
    cout << "\n size of first is:" << &m[0];
    cout << "\n size of table is:" << sizeof(m);

    cout << "\n";
    bool status = true;
    cout << status; // 1
    cout << "\n";
    cout << sizeof(status); // 1

    return 0;
}
