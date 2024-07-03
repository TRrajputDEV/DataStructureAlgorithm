#include<iostream>
using namespace std;
// Formula: n-row+1

int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    while (row<=n)
    {
        /* code */
        int star = n-row+1; // main formula here we doesnt need to print space so we got formula for the stars only.
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