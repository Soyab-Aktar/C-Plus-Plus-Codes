#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, fac = 1;
    cout << "Enter A number : ";
    cin >> i;

    for (; i > 0; i--)
    {
        fac = fac * i;
    }
    cout << "Your Factorial number is : " << fac << endl;
    getch();
}