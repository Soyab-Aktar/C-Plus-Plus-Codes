#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num, even = 0, odd = 0, sum;
    cout << "Enter your number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    sum = odd - even;

    cout<< "1-2+3-4+5-6+7-8......."<< "=" << sum;

    getch();
}