#include <iostream>
using namespace std;

int main()
{
    int day = 6;

    // switch can be used with integer and character not stirng
    // if you don't make a break keyword it will run until it find a break
    switch (day)
    {
    case 6:
    case 7:
        cout << "sorry we are not available \n";
    case 5:
        cout << "8am till 1pm \n";
        break;
    default:
        cout << "invalid choice \n";
        break;
    }

    char d = 'd';
    switch (d)
    {
    case 'd':
        cout << "\n def str";
        break;
    default:
        break;
    }

    return 0;
}