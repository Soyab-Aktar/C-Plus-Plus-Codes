#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
    int n, sum = 0;
    cout << "Enter number more than one digit : ";
    cin >> n;

    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << "Some of digits is : " << sum;
    getch();
}