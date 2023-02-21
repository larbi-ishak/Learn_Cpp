#include <iostream>
using namespace std;

// Logical operators
// and &&
// or ||
// not !

int main()
{
    int age = 18;
    int points = 2000;

    cout << (age == 18 && points >= 2000) << endl;
    cout << (age == 18 and points >= 2000) << endl;
    cout << "---------------------" << endl;
    cout << (age < 18 || points > 2000) << endl;
    cout << (age < 18 or points > 2000) << endl;
    cout << "---------------------" << endl;
    cout << (not(age < 18)) << endl;
    // not not
    cout << (!not(age < 18)) << endl;

    return 0;
}