#include <iostream>
using namespace std;

// Control Flow
// syntax
// if (condition){
// code
// } else if (condition){
// code
// }
// else{
// code
// }

int main()
{
    int age = 18;
    if (age > 18)
    {
        if (age < 22)
        {
            cout << "you are allowed, but be careful (keep your mental health)..." << endl;
        }
        else
        {
            cout << "you are allowed" << endl;
        }
    }
    else if (age == 18)
    {
        cout << "you are allowed but be aware there is some adult content" << endl;
    }
    else
    {
        cout << "you are not allowed" << endl;
    }

    // Ternary operator : short if
    float price = 780.5;
    (price > 70) ? price = 80.0 : price = 9;
    cout << price << endl;
    cout << (0 ? "yes it is true " : "not it is falsy value") << endl;
    cout << (true ? false ? "true inside" : "false inside" : "false outer");

    return 0;
}