#include<iostream>
using namespace std;
/*
D 
C C 
B B B 
A A A A
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
            char ch= 'A'+n-row;
            cout<<ch<<" ";
            // row++;
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}