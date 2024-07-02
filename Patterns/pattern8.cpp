#include<iostream>
using namespace std;


/*  pattern: 
    1 
    2 1 
    3 2 1 
    4 3 2 1
*/

int main()
{
    int rows = 1;
    int n;
    cout<<" Enter the Number: ";
    cin>>n;
    while (rows<=n)
    {
        /* code */
        int col = 1;
        
        while (col<=rows)
        {
            /* code */
            cout<<rows-col+1<<" "; // bro just make the formula i studied during jee
            
            col++;
        }
        cout<<"\n";
        rows++;
    }
    
}