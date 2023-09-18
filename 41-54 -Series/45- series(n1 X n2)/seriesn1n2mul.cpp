#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sum = 0, number1, number2;
    cout << "Enter  your last number : ";
    cin >> number1 >> number2;
    int a = 1, b = 2;
    while (a <= number1 && b <= number2)
    {
        sum = sum + (a * b);
        a++;
        b++;
    }
    cout << sum;
    getch();
}