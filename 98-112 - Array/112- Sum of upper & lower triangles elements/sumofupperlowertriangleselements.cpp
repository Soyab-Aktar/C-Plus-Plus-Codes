#include <iostream>
using namespace std;
int main()
{
    int a[10][10], row1, col1, uppersum = 0, lowersum = 0;

    cout << "Enter your row for matrix : ";
    cin >> row1;

    cout << "Enter your col for matrix : ";
    cin >> col1;

    cout << " " << endl;
    cout << " " << endl;

    cout << "Enter your matrix value : " << endl;

    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col1; col++)
        {
            cout << "[ " << row << " ]"
                 << "[ " << row << " ] = ";
            cin >> a[row][col];
        }
    }

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

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            if (i < j)
            {
                uppersum += a[i][j];
            }

            if (i > j)
            {
                lowersum += a[i][j];
            }
        }
    }
    cout << "Your uppersum of matrix : " << uppersum << endl;
    cout << "Your lowersum of matrix : " << lowersum << endl;

    return 0;
}