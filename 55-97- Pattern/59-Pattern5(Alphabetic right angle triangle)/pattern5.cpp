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
            cout << " " << char (col+64) ;
        }

        cout << endl;
    }

    return 0;
}