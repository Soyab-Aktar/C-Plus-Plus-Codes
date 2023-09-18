#include <iostream>
using namespace std;
int main()

{
    int number, row, col;
    cout << "Enter your number number for Pattern : ";
    cin >> number;

    for (row = 1; row <= number; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << " " << col % 2;
        }
        cout << endl;
    }

    for (row = number - 1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << " " << col % 2;
        }
        cout << endl;
    }

    return 0;
}