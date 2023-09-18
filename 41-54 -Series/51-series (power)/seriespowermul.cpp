#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num, i, result = 1;
    cout << "Enter your number : ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        result *= (i * i);
    }
    cout << "1*1 * 2*2 * 3*3 * 4*4......*"
         << num << "*" << num << " = " << result;

    getch();
}