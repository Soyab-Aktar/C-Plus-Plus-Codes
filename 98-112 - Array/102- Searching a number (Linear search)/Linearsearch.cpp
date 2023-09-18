#include <iostream>
using namespace std;
int main()

{
    int num[] = {10, 78, 45, 13, 20, 50, 99};
    int value, position = -1, i;

    cout << "Enter your value : ";
    cin >> value;

    for (i = 0; i < 7; i++)
    {
        if (value == num[i])
        {
            position = i + 1;
            break;
        }
    }

    if (position == -1)
    {
        cout << "Item not found.";
    }

    else
    {
        cout << "Your item is found in " << position << " position";
    }

    return 0;
}