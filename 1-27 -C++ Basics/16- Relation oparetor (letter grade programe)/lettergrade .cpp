#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int mark;
    cout << "Enter your name :";
    cin >> mark;

    if (mark > 100)
    {
        cout << "invaild number";
    }
    if (mark < 0)
    {
        cout << "invaild number";
    }
    else if (mark > 90)
    {
        cout << "A+";
    }
    else if (mark > 80)
    {
        cout << "B+";
    }
    else if (mark > 60)
    {
        cout << "C+";
    }
    else if (mark > 40)
    {
        cout << "D+";
    }

    else
    {
        cout << "Fail";
    }

    getch();
}
