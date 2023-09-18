#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, ori,rev=0;
    cout << "Enter your number : ";
    cin >> i;

    ori=i;

    while (ori>0)
    {
        
        rev=rev*10+ori%10;
        ori = ori / 10;
    }

    if (i == rev)
    {
        cout << "It is a palindrom number.";
    }
    else
    {
        cout << "It is not a palindrom number.";
    }
    getch();
}