#include<iostream>
using namespace std;


//     pattern :
/*     * 
       * * 
       * * *    */
int main()
{
    int row = 1;
    cout<<"Enter the Number of Star row Wanted: ";
    int n;
    cin>> n ;
    while (row<=n)
    {
        /* code */
        int col=1;
        while (col<=row)// here main thing is this...
        {
            /* code */
            cout<<"*"<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}