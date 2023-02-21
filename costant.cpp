#include <iostream>
using namespace std;

int main()
{
    const int max_size = 4;
    // max_size = 4; Error read-only variable
    cout << max_size;

    // const int salary; Error uninitialized
    cout << "\n";
    system("pause");
    return 0;
}
