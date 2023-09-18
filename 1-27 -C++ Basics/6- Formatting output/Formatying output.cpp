#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;

    cout<< "Enter Two Number";
    cin>>num1>>num2;




    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(3);





    //Addition
    float sum=num1+num2;

    cout<<setw(20)<< "Addition is="<<sum<<endl;

    //Subtraction
    float  sub=num1-num2;

    cout<<setw(20)<<  "Subtraction is="<<sub<<endl;

    //Multiplication
    float mul=num1*num2;

    cout<<setw(20)<<  "Multiplication is="<<mul<<endl;

    //Division
   float div=num1/num2; //Type Casting

    cout<<setw(20)<<  "Division is="<<div<<endl;

    //Reminder
    //float rem= num1%num2;

   // cout<< "Reminder is="<<rem;








    getch();
}
