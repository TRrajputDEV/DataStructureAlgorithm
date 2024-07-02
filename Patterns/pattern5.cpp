#include<iostream>
using namespace std;

/*  pattern: 
    1 
    2 2 
    3 3 3 
    4 4 4 4 */

int main()
{
    int row = 1;
    int n;
    cout<<" enter the number: ";
    cin>>n;
    while (row<=n)
    {
        /* code */
        int col =1;
        while (col<=row)// (col<=n for square prinnting)
        {
            /* code */
            cout<<row<<" ";// we have to print the order then we noticed that its only the row number we re printing same as the triangle we printed
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}