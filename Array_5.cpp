#include <iostream>
#include <array>
using namespace std;

// Two dimensions

int main()
{
    cout << "Array Learning \n";
    int names[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // not recommended: C style array (source to bugs)
    // good style
    // must be constant
    const int length = 4;

    // array<type, length> variable_name = {values}

    array<int, length> grades = {11, 14, 12, 43};
    array<string, 5> schools = {"11", "14", "12", "43"};

    cout << "length: " << schools.size() << endl;
    schools.fill("10");
    cout << schools[1] << endl;
    cout << schools[4] << endl;
    grades.fill(true);
    cout << grades[3] << endl;
    return 0;
}