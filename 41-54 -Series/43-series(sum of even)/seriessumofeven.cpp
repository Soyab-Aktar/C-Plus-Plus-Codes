//(sum of even number) means=2+4+6+8+.......+n

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sum = 0, number;
    cout << "Enter  your last number : ";
    cin >> number;

    for (int i = 2; i <= number; i += 2)
    {
        sum += i;
    }
    cout<< "2+4+6+8+......+"<<number<< " = " << sum;
    getch();
}