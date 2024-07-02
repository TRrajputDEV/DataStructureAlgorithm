#include<iostream>
using namespace std;

// pattern: 
/*
A 
B C 
D E F
*/
int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    int value =0;
    while (row<=n)
    {
        /* code */
        int col =1;
        while (col<=row)
        {
            /* code */
            char ch = 'A'+value;
            cout<<ch<<" ";
            value++;
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}