#include <iostream>
using namespace std;
int main()

{
    int num1, num2;

    cout << "Enter Number1 = ";
    cin >> num1;

    cout << "Enter Number2 = ";
    cin >> num2;

    int *pointer1, *pointer2;

    pointer1 = &num1;
    pointer2 = &num2;

    cout << "Your Sum after using pointer : " << *pointer1 + *pointer2;

    return 0;
}