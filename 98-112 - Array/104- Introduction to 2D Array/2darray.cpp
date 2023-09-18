#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {
        {10, 50, 90},
        {49, 67, 34}};

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << a[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}
