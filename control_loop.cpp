#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int nums[] = {1, 2, 45, 68, 78, 12, 12};
    for (int i = 6; i >= 0; i--)
    {
        cout << nums[i] << endl;
    }
    int j = 6;
    for (;;)
    {
        cout << nums[j] << endl;
        if (j == 0)
            break;
        j--;
    }
    j = 1;
    while (j < 5)
    {
        cout << j << endl;
        if (j % 2 == 0)
        {
            break;
        }
        j++;
    }
    return 0;
}
