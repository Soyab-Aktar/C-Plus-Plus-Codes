//(sum of even number) means=1.5+2.5+3.5+4.5+.......+n

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double sum = 0, number;
    cout << "Enter  your last number : ";
    cin >> number;

    for (int i = 1; i <= number; i += 1)
    {
        sum += i;
    }
    cout<< "1.5+2.5+3.5+4.5+.....+"<<number<< " = " << sum;
    getch();
}