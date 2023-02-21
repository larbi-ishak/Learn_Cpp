#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char fname[] = "ishak";
    char lname[] = "larbi";
    string one = "ishak";
    string two = "larbi";

    cout << fname << " " << lname << endl;
    cout << strcat(fname, lname) << endl; // it takes just two arguments
    cout << one + " " + two << endl;
    cout << one.append(two); // same problem takes one argument

    return 0;
}
