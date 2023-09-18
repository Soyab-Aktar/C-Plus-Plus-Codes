#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;

    cout<< "Enter Two Number";
    cin>>num1>>num2;


    //Addition
    int sum=num1+num2;

    cout<< "Addition is="<<sum<<endl;

    //Subtraction
    int sub=num1-num2;

    cout<< "Subtraction is="<<sub<<endl;

    //Multiplication
    int mul=num1*num2;

    cout<< "Multiplication is="<<mul<<endl;

    //Division
   double div= (float)num1/num2; //Type Casting

    cout<< "Division is="<<div<<endl;

    //Reminder
    int rem= num1%num2;

    cout<< "Reminder is="<<rem;








    getch();
}
