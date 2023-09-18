#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int year;
cout<< "Enter any year : ";
cin>>year;

if(year%4==0 && year%100!=0)
{

cout<< "It is leapyear";

}
else if(year%400==0)
{

cout<< "It is leapyear";

}
else
{

cout<< "Its not leapyear";

}


    getch();
}