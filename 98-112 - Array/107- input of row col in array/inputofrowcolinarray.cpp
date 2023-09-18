#include <iostream>
using namespace std;
int main()
{

    // Matrix for a

    int a[10][10], row1, col1;

    cout << "Enter your row numbers for a Matrix :";
    cin >> row1;

    cout << "Enter your col numbers for a Matrix :";
    cin >> col1;

    cout << " " << endl;

    // input of a

    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col1; col++)
        {
            cout << "a[ " << row << " ]"
                 << "[ " << col << " ] = ";
            cin >> a[row][col];
        }
    }

    cout << " " << endl;

    cout << "Your Matrix of 'a' is :" << endl;

    // output of a;

    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col1; col++)
        {
            cout << a[row][col] << " ";
        }

        cout << endl;
    }

    cout << " ";

    cout << endl;

    // Matrix for b

    int b[10][10], row2, col2;

    cout << "Enter your row numbers for b Matrix :";
    cin >> row2;

    cout << "Enter your col numbers for b Matrix :";
    cin >> col2;

    cout << " " << endl;

    // input of b

    for (int row = 0; row < row2; row++)
    {
        for (int col = 0; col < col2; col++)
        {
            cout << "b[ " << row << " ]"
                 << "[ " << col << " ] = ";
            cin >> b[row][col];
        }
    }

    cout << " " << endl;

    cout << "Your Matrix of 'b' is :" << endl;

    // output of b;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < col2; col++)
        {
            cout << b[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}
