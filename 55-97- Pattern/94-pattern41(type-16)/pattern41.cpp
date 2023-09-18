#include <iostream>
using namespace std;
int main()

{
    int num, row, col, count = 1;
    cout << "Enter your n - ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
            cout << count++;

        cout << endl;
    }

    return 0;
}