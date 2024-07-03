#include<iostream>
using namespace std;
/*  pattern: 
    A 
    B C 
    C D E 
    D E F G
*/
int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    while (row<=n)
    {
        /* code */
        int col =1;
        while (col<=row)
        {
            /* code */
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}