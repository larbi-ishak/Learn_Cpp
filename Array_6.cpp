#include <iostream>
#include <array>
using namespace std;

// Two dimensions

int main()
{
    cout << "Array Learning \n";

    array<int, 4> grades = {11, 14, 12, 43};
    array<string, 5> schools = {"11", "14", "12", "43"};
    cout << grades.front() << endl;
    cout << grades.back() << endl;
    cout << grades.at(2) << endl;
    cout << grades.empty() << endl; // 0 false

    return 0;
}