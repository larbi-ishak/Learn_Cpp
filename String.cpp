#include <iostream>
using namespace std;

// string : is array of characters
// \0

int main()
{
    string name = "LARBI Ishak";
    string ter_name = "LARBI \0 Ishak";
    cout << name << endl;
    cout << ter_name << endl;
    char m[] = "ELZERO";

    // char m[] = {'E', 'L', 'Z', 'E', 'R', 'O', '\0'};
    cout << m << endl;
    cout << m[0] << endl;
    cout << m[6] << endl;      // \0
    cout << (int)m[6] << endl; // asci value : 0

    return 0;
}
