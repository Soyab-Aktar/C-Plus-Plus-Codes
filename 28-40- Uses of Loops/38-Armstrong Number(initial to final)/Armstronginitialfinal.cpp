#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, initial, final, temp, reminder, sum = 0;
    cout << "Initial value : ";
    cin >> initial;
    cout << "Final value : ";
    cin >> final;

    for (i = initial; i <= final; i++)
    {
        temp = i;
        while (temp != 0)
        {
            reminder = temp % 10;
            sum += reminder * reminder * reminder;
            temp /= 10;
        }

        if (sum == i)
        {
            cout << i << endl;
        }
        sum = 0;
    }

    getch();
}