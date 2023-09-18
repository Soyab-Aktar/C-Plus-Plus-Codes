//(1 to n) means= 1+2+3+4+5+.......+n

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sum = 0, number;
    cout << "Enter  your last number : ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    cout<< "1+2+3+4.....+"<<number<< " = " << sum;
    getch();
}