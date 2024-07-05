#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int row1, row2, col1, col2;

    // input form user for row and col for 'a' :
    cout << "Enter your row for 'a' matrix = ";
    cin >> row1;
    cout << "Enter your col for 'a' matrix = ";
    cin >> col1;

    // input form user for row and col for 'b' :
    cout << "Enter your row for 'b' matrix = ";
    cin >> row2;
    cout << "Enter your col for 'b' matrix = ";
    cin >> col2;

    // Condition if not aplicable :

    if (col1 != row2)
    {
        cout << "Multiplication of matrix is not possible" << endl;
        return 0;
    }

    // input of 'a' matrix :
    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col1; col++)
        {
            cout << " [ " << row << "  ]"
                 << " [ " << col << "  ] = ";
            cin >> a[row][col];
        }
    }

    cout << " " << endl;
    cout << " " << endl;

    // input of 'b' matrix :

    for (int row = 0; row < row2; row++)
    {
        for (int col = 0; col < col2; col++)
        {
            cout << " [ " << row << "  ]"
                 << " [ " << col << "  ] = ";

            cin >> b[row][col];
        }
    }

    // Matrix multiplication

    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col2; col++)
        {
            c[row][col] = 0;

            for (int other = 0; other < col1; other++)
            {
                c[row][col] += a[row][other] * b[other][col];
            }
        }
    }

    // Output of Matrix multiplication :

    for (int row = 0; row < row1; row++)
    {
        for (int col = 0; col < col2; col++)
        {
            cout << c[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}