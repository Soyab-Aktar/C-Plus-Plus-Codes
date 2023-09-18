#include <iostream>
using namespace std;

int main()
{
    int array1[5] = {10, 60, 46, 32, 55};
    int array2[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Array 1 = " << array1[i] << ",";
    }

    for (int i = 0; i < 5; i++)
    {
        array2[i] = array1[i];
    }

    cout << "\nArray 2 = ";
    for (int i = 0; i < 5; i++)
    {
        cout << array2[i] << " ";
    }

    return 0;
}
