#include<iostream>
using namespace std;


/*  pattern: 
    1 
    2 3 
    4 5 6 
    7 8 9 10  */

int main()
{
    int row= 1;
    int n;
    cout<<" Enter the Number: ";
    cin>>n;
    int count = 1;
    while (row<=n)
    {
        /* code */
        int col = 1;
        while (col<=row)
        {
            /* code */
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}