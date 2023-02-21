#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "it is odd \n";
    }
    else
    {
        cout << "it is even \n";
    }

    int a, b, c = 0;

    cin >> a >> b >> c;

    if (a >= c and a >= b)
    {
        cout << "a is the greater";
    }
    else if (c >= b)
    {

        cout << "c is the greater";
    }
    else
    {
        cout << "b is the greater";
    }

    return 0;
}