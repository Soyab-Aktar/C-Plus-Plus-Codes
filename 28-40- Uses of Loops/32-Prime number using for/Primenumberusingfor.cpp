#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j;
    cout << "Enter a number : ";
    cin >> i;
    bool isPrime = true;
    if (i == 0 || i == 1)
    {
        isPrime = false;
    }

    for (j = 2; j < i; j++)
    {
        if (i % j == 0)
            isPrime == false;
        break;
    }
    if (isPrime)
        cout << " It is a prime Number";
    else
        cout << "It is a composite number";
    getch();
}