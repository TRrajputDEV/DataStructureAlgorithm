#include<iostream>
using namespace std;
// [Pattern] 
/*
   1
  121
 12321
1234321
*/
int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    while (row<=n)
    {
        int space = n-row;
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
            cout<<col;
            col++;
        }

        int start = row -1;
        while (start)
        {
            cout<<start;
            start--;
        }
        
        cout<<"\n";
        row++;
    }
    
}