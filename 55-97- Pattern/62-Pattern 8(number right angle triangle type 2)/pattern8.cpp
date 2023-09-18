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
            cout << " " << col;
        }

        cout << endl;
    }

    return 0;
}