#include<iostream>
using namespace std;

/*pattern: 
D 
C D 
B C D 
A B C D
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
        char ch= 'A'+n-row;
        while (col<=row)
        {
            /* code */
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}