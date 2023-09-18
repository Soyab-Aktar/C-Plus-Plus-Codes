#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, fac = 1;
    cout << "Enter A number : ";
    cin >> i;

    while (i > 0)
    {
        fac = fac * i;
        i--;
    }
    cout << "Your Factorial number is : " << fac << endl;
    getch();
}