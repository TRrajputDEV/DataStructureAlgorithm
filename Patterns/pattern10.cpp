#include<iostream>
using namespace std;
//ch+col -1
/*
A B C D 
A B C D 
A B C D 
A B C D 
*/
int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    while (row<= n)
    {
        /* code */
        int col = 1;
        while (col<=n)
        {
            /* code */
            char ch ='A'+col-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}