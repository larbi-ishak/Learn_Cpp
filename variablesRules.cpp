#include <iostream>
using namespace std;
/**
 * Naming Rules:
 * - Unique
 * - case sensitive
 * - cant start with numbers
 * - letters , underscore , nums are allowed
 * - some reserved keywords
 * - can declare multiple values in one line
 * - can declare variable without value
 */

int a = 9;

int main()
{
    int a = 4;
    cout << a;

    cout << "\n";
    int price = 44;
    int Price_main = 44;
    cout << Price_main;

    // d = 7; Error
    // int a,char b; Error

    int first = 12, second = 13;
    int undefined_value;
    cout << "\n";
    cout << "undefined is: " << undefined_value; // 15 as value but why?
    cout << "\n";

    int x, y, z;
    x = y = z = 10; // declaring multiple variables with same value

    x = 4;
    cout << x + y + z;
    cout << "\n";
    cout << y;

    return 0;
}
