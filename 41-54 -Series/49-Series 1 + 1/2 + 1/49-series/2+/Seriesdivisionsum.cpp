#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double num, i, sum = 0;
    cout << "Enter your number : ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        sum += 1 / i;
    }
    cout << "1+1/2+1/3+1/4+......+"
         << "1"
         << "/" << num << " = " << sum;

    getch();
}