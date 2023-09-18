#include <iostream>
using namespace std;
int main()

{
    int x = 5;
    int *p;

    p = &x;

    cout << x << endl;  // output=5
    cout << p << endl;  // output= 0x61ff08
    cout << *p << endl; // output=5
    cout << &x << endl; // output= 0x61ff08

    return 0;
}