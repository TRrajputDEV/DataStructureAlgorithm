#include<iostream>
using namespace std;

// [pattern]
/*

*****
 ****
  ***
   **
    *

*/
int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    while (row<=n)
    {
        int space = row-1;
        while (space)
        {
            /* code */
            cout<<" ";
            space--;
        }
        int star = n - row+1;
        while (star)
        {
            /* code */
            cout<<"*";
            star--;
        }
        cout<<"\n";
        row++;
    }
    
}