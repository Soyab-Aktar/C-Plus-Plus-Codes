#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "ENter a numnber :";
    cin>>num;

    for(int row=0;row<num;row++)
    {
        for(int col=0;col<num-row-1;col++)
        {
            cout<< " ";
        }

        for(int col=0;col<row+1;col++)
        {
            if(col==0 || col == row+1-1)
            {
                cout<< "# ";
            }
            else
            {
                cout<< "  ";
            }
        }
        cout<<endl;
    }
      for(int row=0;row<num;row++)
    {
        for(int col=0;col<row;col++)
        {
            cout<< " ";
        }

        for(int col=0;col<num-row;col++)
        {
            if(col==0 || col == num-row-1)
            {
                cout<< "# ";
            }
            else
            {
                cout<< "  ";
            }
        }
        cout<<endl;
    }

    return 0;
}