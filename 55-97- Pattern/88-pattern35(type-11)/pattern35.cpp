#include <iostream>
using namespace std;
int main()
{
    int num, row, col;
    cout << "Enter N-";
    cin >> num;

    for (row = num; row >= 1; row--)
    {
        for (col = 1; col <= num - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    return 0;
}