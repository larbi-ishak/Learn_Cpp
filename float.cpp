#include <iostream>
using namespace std;

/**
 * Float 4 Bytes
 */

int main()
{
    cout << sizeof(float) << endl;
    const auto m = 89.000;
    cout << m << endl;

    float g = 0.1 + 0.2;   // dealing with 0.1 and 0.2 as double
    float f = 0.1f + 0.2f; // dealing with 0.1 and 0.2 as float
    cout << g << endl;
    cout << f << endl;

    auto mix = 7.9f; // dealing with number as a float
    return 0;
}
