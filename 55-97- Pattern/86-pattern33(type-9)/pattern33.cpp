#include <iostream>
using namespace std;
int main()
{
    int num, row, col;
    cout << "Enter N-";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << " " << col * row;
        }
        cout << endl;
    }

    return 0;
}