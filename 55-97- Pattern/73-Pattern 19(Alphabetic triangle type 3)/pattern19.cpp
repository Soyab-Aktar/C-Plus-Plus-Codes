#include <iostream>
using namespace std;
int main()

{
    int number, col, row;
    cout << "Enter your number for pattern : ";
    cin >> number;

    for (row = 1; row <= number; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << " " << char(col + 64);
        }
        cout << endl;
    }

    for (row = number - 1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << " " << char(col + 64);
        }
        cout << endl;
    }

    return 0;
}