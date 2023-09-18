#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
    int marks[5] = {80, 78, 45, 67, 24};

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << "=";

        cin >> marks[i];
    }

    cout << "Marks are - ";

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    getch();
}