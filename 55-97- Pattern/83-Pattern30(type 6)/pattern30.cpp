#include <iostream>
using namespace std;
int main()
{
    int num, row, col;
    cout << "Enter N- ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num - row; col++)
        {
            cout << " ";
        }

        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    for (row = num - 1; row >= 1; row--)
    {
        for (col = 1; col <= num - row; col++)
        {
            cout << " ";
        }

        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    return 0;
}