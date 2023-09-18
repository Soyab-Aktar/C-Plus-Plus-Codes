#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
    int i, rev = 0;
    cout << "Enter your number for reverce : ";
    cin >> i;

    while (i > 0)
    {
        rev = rev * 10 + i % 10;
        i = i / 10;
    }
    cout << "Your reverce number is : " << rev;
    getch();
}