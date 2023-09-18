#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number : ";
    cin>>n;

    for(int row=0;row<n;row++)
    {
        //invert triangle pyramid
        for(int col=0;col<n-row;col++)
        {
            cout<< "#";
        }

        //pyramid
        for(int col=0;col<2*row+1;col++)
        {
            cout<< " ";
        }

        //invert triangle pyramid
        for(int col=0;col<n-row;col++)
        {
            cout<< "#";
        }

        cout<< endl;
    }
    for(int row=0;row<n;row++)
    {
        //invert triangle pyramid
        for(int col=0;col<row+1;col++)
        {
            cout<< "#";
        }

        //pyramid
        for(int col=0;col<2*n-2*row-1;col++)
        {
            cout<< " ";
        }

        //invert triangle pyramid
        for(int col=0;col<row+1;col++)
        {
            cout<< "#";
        }

        cout<< endl;
    }
    return 0;
}