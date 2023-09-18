#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
    int n, count = 0;
    cout << "Enter your number :";
    cin >> n;

    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << "Total number of digit : " << count;

    getch();
}