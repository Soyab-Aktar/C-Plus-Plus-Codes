#include <iostream>
using namespace std;
int main()

{
    int number, row, col;
    cout << "Enter yout number for Pattern : ";
    cin >> number;

    for (row = number; row >= 1; row--)
    {

        for (col = 1; col <= row; col++)
        {
            cout << " " << row % 2;
        }

        cout << endl;
    }
}