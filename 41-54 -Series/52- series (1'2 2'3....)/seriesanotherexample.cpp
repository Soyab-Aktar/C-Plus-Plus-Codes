#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int result = 1, num1, num2;
    cout << "Enter first numbers : ";
    cin >> num1;
    cout << "Enter second numbers : ";
    cin >> num2;

    int a = 1, b = 2;
    while (a <= num1 && b <= num2)
    {
        result *= (a * b);
        a++;
        b++;
    }
    cout << result;

    getch();
}