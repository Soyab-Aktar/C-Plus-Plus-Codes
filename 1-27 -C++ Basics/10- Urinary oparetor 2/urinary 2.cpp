#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=5;

    int y=--x;
    cout<< "Your prefix decrement=" <<y<<endl;
    y=++x;
    cout<< "Your prefix increment=" <<y<<endl;
    y=x--;
    cout<< "Your suffex decrement=" <<y<<endl;
    y=x++;
    cout<< "Your suffex increment=" <<y;







    getch();
}
