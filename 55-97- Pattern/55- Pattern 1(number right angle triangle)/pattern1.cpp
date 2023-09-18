#include <iostream>
using namespace std;
int main()

{
    int number, row, col;

    cout << "enter Your number for your Pattern : ";
    cin >> number;

    for (row = 1; row <= number; row++)
    {

        for (col = 1; col <= row; col++)
        {
            cout << " " << col;
        }
        cout << endl;
    }

    return 0;
}