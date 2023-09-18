#include <iostream>
using namespace std;

double addition(double, double);

int main()
{
    cout << addition(10.7, 15.7);

    return 0;
}

double addition(double a, double b)
{
    double sum = a + b;
    return sum;
}
