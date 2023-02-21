#include <iostream>
using namespace std;

// Access
// address of first element is the address of the name

int main()
{
    cout << "Array Learning \n";
    int names[5];
    string schools[]{"ensttic", "esi", "polytechnic"};
    int args[6] = {1, 2, 3, 0, 90};

    cout << "random value\t" << args[5] << endl;

    schools[2] = "institution";
    cout << schools[2] << endl;

    // pointer like in c
    int *m = &args[1];
    int **r = &m;
    cout << *m << endl;
    cout << **r;

    return 0;
}