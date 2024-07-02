#include<iostream>
using namespace std;


/*      pattern: 
        1 
        2 3 
        3 4 5 
        4 5 6 7
*/
int main()
{
    int row = 1;
    int n;
    cout<<" Enter the Number: ";
    cin>> n;
    while (row<=n)
    {
        /* code */
        int col = 1;
        int temp;
        temp = row;
        while (col<=row)
        {
            /* code */
            cout<<temp<<" ";// we saw that all rows are starting by row number so we took a same temp varialble to print and increamented it every single time.
            temp++;
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}