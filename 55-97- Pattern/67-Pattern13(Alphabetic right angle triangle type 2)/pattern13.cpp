#include <iostream>
using namespace std;
int main()

{
    int number, row, col;
    cout << "Enter your number for pattern : ";
    cin >> number;

    for (row = number; row >= 1; row--)
    {

        for (col = 1; col <= row; col++)
        {
            cout << " " << char(row + 64);
        }

        cout << endl;
    }

    return 0;
}