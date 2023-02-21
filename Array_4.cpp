#include <iostream>
using namespace std;

// Two dimensions

int main()
{
    cout << "Array Learning \n";
    int names[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // bad practice
    // int names[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << names[0][2] << endl;

    const int length = 4;
    string inputs[length] = {"1",
                             "2",
                             "3",
                             "4"};

    cout << inputs[3] << endl;
    return 0;
}