#include <iostream>
using namespace std;
int main()
{
    int a[10][10], row1, row2, col1, col2;

    cout << "Enter your row for matrix : ";
    cin >> row1;

    cout << "Enter your col for matrix : ";
    cin >> col1;

    cout << " " << endl;
    cout << " " << endl;

    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col1; col++)
        {
            cout << "[ " << row << " ]"
                 << "[ " << col << " ] = ";
            cin >> a[row][col];
        }
    }

    cout << "Your 'a' matrix is -" << endl;
    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col1; col++)
        {
            cout << a[row][col] << " ";
        }

        cout << endl;
    }

    cout << " " << endl;
    cout << " " << endl;

    int transpose[10][10];

    for (int row = 0; row < col1; row++)
    {
        for (int col = 0; col < row1; col++)
        {
            transpose[row][col] = a[col][row];
        }
    }

    cout << "Your transpose matrix is = " << endl;

    for (int row = 0; row < col1; row++)
    {
        for (int col = 0; col < row1; col++)
        {
            cout << transpose[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}