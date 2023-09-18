#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    float b;
    double c;
    char ch;
    char name[20];

    int p = sizeof(a);
    cout << p << endl;

    int q = sizeof(b);
    cout << q << endl;

    int m = sizeof(c);
    cout << m << endl;

    int n = sizeof(ch);
    cout << n << endl;

    int g = sizeof(name);
    cout << g;

    getch();
}
