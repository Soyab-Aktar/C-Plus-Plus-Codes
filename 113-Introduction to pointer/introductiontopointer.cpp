#include <iostream>
using namespace std;
int main()

{
    int x = 5;
    int *p; // asterisk (*)

    p = &x; // p now points to the memory address of num

    cout << x << endl;  // output=5
    cout << p << endl;  // output= 0x61ff08
    cout << *p << endl; // output=5
    cout << &x << endl; // output= 0x61ff08

    return 0;
}