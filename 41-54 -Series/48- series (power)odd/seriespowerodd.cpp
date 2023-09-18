#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num, i, sum = 0;
    cout << "Enter your number : ";
    cin >> num;

    for (i = 1; i <= num; i = i + 2)
    {
        sum += i * i;
    }
    cout << "1*1+3*3+5*5......+" << num << "*" << num << " = " << sum;

    getch();
}