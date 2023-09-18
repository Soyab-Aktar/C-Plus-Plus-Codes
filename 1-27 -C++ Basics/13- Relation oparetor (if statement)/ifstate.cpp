#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int num;
    cout<< "Enter your number :";
    cin>>num;


    if(num>0)
    {
        cout<< "positive";
    }

    if(num<0)
    {
        cout<< "Negative";
    }

    if(num==0)
    {
        cout<< "zero";
    }


    getch();
}
