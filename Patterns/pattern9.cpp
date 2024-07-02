#include<iostream>
using namespace std;

//formula :  'A'+row-1 
/*     pattern:
        A A A A 
        B B B B 
        C C C C 
        D D D D
*/
int main()// everything else is same 
{
    int row = 1;
    int n ;
    cout<<" Enter the number: ";
    cin>> n;
    while (row<=n)
    {
        /* code */
        int col = 1;
        while (col<=n)
        {
            char ch ='A'+row-1; // made a formula for checking character it was matching with the row and this is how i came up with this.
            /* code */
            cout<<ch<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}