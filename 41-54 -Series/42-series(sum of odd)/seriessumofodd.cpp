//(sum of even number) means=1+3+5+7+.......+n

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sum = 0, number;
    cout << "Enter  your last number : ";
    cin >> number;

    for (int i = 1; i <= number; i += 2)
    {
        sum += i;
    }
    cout<< "1+3+5+7+.......+"<<number<< " = " << sum;
    getch();
}