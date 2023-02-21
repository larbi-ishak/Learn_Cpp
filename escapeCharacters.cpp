#include <iostream>
using namespace std;

/**
 * \\
 * \'
 * \"
 * \n
 * \a
 * \b  backspace deletes one letter before
 * \r
 * \t
 */

int main()
{
    cout << "M \t t";
    cout << "\n";
    cout << "tab\b t"; // ta t
    cout << "\n";
    cout << "\a"; // a makes a beep when executing the program
    cout << "\n";
    cout << "Larbi  \r Ishak"; //  it overrides what's written before , so it replaces what before with what after
    // Ishak

    return 0;
}
