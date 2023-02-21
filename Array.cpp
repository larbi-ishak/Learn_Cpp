#include <iostream>
using namespace std;

// All have same datatype
// length initialization optional
// you can omit =

int main()
{
    cout << "Array Learning \n";
    int names[4] = {1, 2, 3, 0};
    cout << names[3] << endl;
    cout << sizeof(names[0]) << endl;
    cout << sizeof(names) << endl;
    cout << "----------\n";
    int args[] = {1, 2, 3, 0, 90};
    cout << args[4] << endl;
    string schools[]{"ensttic", "esi", "polytechnic"};
    cout << schools[0] << endl;

    return 0;
}