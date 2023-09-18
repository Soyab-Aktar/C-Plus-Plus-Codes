#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,originalnum,reminder,result=0;
    cout<< "Enter your three digit number : ";
    cin>>num;
    originalnum=num;

    while(originalnum!=0)
    {
        reminder=originalnum%10;
        result+=reminder*reminder*reminder;
        originalnum/=10;

    }
    if(result==num)
    {
        cout<< "It is a armstrong number";
    }
    else
    {
        cout<< "It is not a armstrong number";
    }

    getch();
}