#include <iostream>
using namespace std;

void addition(int, int);
void substraction(int, int);
void multiplication(int, int);
void division(float, int);
void reminder(int, int);

int main()
{
    addition(10, 7);
    substraction(10, 7);
    multiplication(10, 7);
    division(10, 7);
    reminder(10, 7);

    cout << "All function have called .";
}

void addition(int a, int b)
{
    int sum = a + b;
    cout << "Addition is : " << sum << endl;
}

void substraction(int a, int b)
{
    int sub = a - b;
    cout << "substraction is : " << sub << endl;
}

void multiplication(int a, int b)
{
    int mul = a * b;
    cout << "multiplication is : " << mul << endl;
}

void division(float a, int b)
{
    float div = (float)a / b;
    cout << "division is : " << div << endl;
}

void reminder(int a, int b)
{
    int rem = a % b;
    cout << "reminder is : " << rem << endl;
}