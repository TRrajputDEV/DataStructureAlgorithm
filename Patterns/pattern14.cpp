#include<iostream>
using namespace std;

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
            char ch = 'A'+row -1;
            cout<<ch<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}