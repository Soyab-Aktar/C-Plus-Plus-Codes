#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
    int n, sum = 0;
    cout << "Enter number more than one digit : ";
    cin >> n;

    for (; n > 0; n = n / 10)
    {
        sum = sum + n % 10;
    }
    cout << "Some of digits is : " << sum;
    getch();
}