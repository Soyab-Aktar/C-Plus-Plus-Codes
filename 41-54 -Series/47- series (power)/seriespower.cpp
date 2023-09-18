#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<< "Enter your number : ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        sum+=i*i;
    }
    cout<< "1*1+2*2+3*3......+"<<num<< "*"<<num<< " = "<<sum;

    getch();
    
}