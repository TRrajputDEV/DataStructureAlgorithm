#include<iostream>
using namespace std;

/*

   *
  * *
 * * *
* * * *

*/
int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    while (row<=n)
    {   int space = n-row;
        /* code */
        while (space)
        {
            /* code */
            cout<<" ";
            space--;
        }
        
        int col =1;
        while (col<=row)
        {
            /* code */
            cout<<"*"<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}