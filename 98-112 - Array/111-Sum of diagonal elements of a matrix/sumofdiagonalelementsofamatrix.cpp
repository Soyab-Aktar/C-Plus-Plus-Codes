#include <iostream>
using namespace std;
int main()
{
    int a[10][10], row1, col1, sum = 0;

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
                 << "[ " << row << " ] = ";
            cin >> a[row][col];
        }
    }

    cout << "Your Matrix is - " << endl;

    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col1; col++)
        {
            cout << a[row][col] << " ";
        }

        cout << endl;
    }
    cout << " " << endl;

    if (row1 == col1)
    {
        for (int i = 0; i < row1; i++)
        {
            sum += a[i][i];
        }
        cout << "Sum of diagonal elements : " << sum;
    }

    else
    {
        cout << "Matrix is not a square, its diagonal sum not possible .";
    }

    return 0;
}