#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int num;
    cout<< "Enter your name";
    cin>>num;

    if(num>0)
    {

        cout<< "positive";

    }

    else if(num<0)
    {

        cout<< "negative";

    }

    else
    {

        cout<< "zero";

    }

    getch();
}

