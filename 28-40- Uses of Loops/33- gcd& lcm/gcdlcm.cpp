#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
    int m, n, rem, lcm, gcd;
    cout << "Enter two numbers : ";
    cin >> m >> n;
    int a = m, b = n;

    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }

    gcd = a;
    lcm = m * n / gcd;
    cout << "Your GCD value is : " << gcd << endl;\
    cout << "Your LCM value is : " << lcm;
}