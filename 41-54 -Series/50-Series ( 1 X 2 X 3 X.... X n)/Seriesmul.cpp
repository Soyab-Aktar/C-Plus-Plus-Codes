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
        result *= i;
    }
    cout << "1*2*3*4*5......*"
         << num << " = " << result;

    getch();
}