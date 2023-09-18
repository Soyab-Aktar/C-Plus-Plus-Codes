#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int num, sum = 0, factorial, original, reminder, i;

    cout << "Enter your number : ";
    cin >> num;

    original = num;

    while (original != 0)
    {
        reminder = original % 10;
        factorial = 1;

        for (i = 1; i <= reminder; i++)
        {
            factorial *= i;
        }

        sum += factorial;
        original /= 10;
    }

    if (sum == num)
    {
        cout << "It is a strong number";
    }
    else
    {
        cout << "It is not a strong number ";
    }

    getch();
}
