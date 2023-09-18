#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, count = 0;
    cout << "Enter your number : ";
    cin >> i;
    j = 1;

    while (j <= i)
    {
        if (i % j == 0)
            count++;
        j++;
    }
    if (count == 2)
    {
        cout << "It is a prime number";
    }
    else
    {
        cout << "It is a composite number";
    }

    getch();
}