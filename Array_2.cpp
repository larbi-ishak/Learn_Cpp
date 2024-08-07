#include <iostream>
using namespace std;

// Access
// address of first element is the address of the name

int main()
{
    cout << "Array Learning \n";
    int names[4] = {1, 2, 3, 0};
    string schools[]{"ensttic", "esi", "polytechnic"};
    int args[] = {1, 2, 3, 0, 90};

    cout << schools << endl;
    cout << &schools[0] << endl;
    cout << &schools[1] << endl;
    cout << &schools[2] << endl;
    cout << schools[0] << endl;
    cout << sizeof(schools[0])/8 << " Bytes" << endl;

    return 0;
}
