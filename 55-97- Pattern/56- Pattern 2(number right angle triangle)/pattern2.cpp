#include <iostream>
using namespace std;
int main()

{
    int number, row, col;

    cout << "Enter your number for Pattern : ";
    cin >> number;

    for (row = 1; row <= number; row++)
    {

        for (col = 1; col <= row; col++)
        {
            cout << " " << row;
        }

        cout << endl;
    }

    return 0;
}