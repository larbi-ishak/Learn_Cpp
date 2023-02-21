#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "type your age" << endl;
    cin >> age;

    int days = age * 365;
    int hours = age * 365 * 24;

    cout << "your age in days is: " << days << " day and in hours : " << hours << "hours";

    cout << "\n";
    return 0;
}
