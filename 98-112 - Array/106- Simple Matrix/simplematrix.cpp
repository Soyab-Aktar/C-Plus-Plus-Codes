#include <iostream>
using namespace std;
int main()
{

    // Matrix for a

    int a[2][3];

    cout << "Enter your Numbers for a Matrix :" << endl;
    cout << " " << endl;

    // input of a

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "a[ " << row << " ]"
                 << "[ " << col << " ] = ";
            cin >> a[row][col];
        }
    }

    cout << " " << endl;

    cout << "Your Matrix of 'a' is :" << endl;

    // output of a;

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << a[row][col] << " ";
        }

        cout << endl;
    }

    cout << " ";

    cout << endl;

    // Matrix for b

    int b[3][2];

    cout << "Enter your Numbers for b Matrix :" << endl;
    cout << " " << endl;

    // input of b

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
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
        for (int col = 0; col < 2; col++)
        {
            cout << b[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}
