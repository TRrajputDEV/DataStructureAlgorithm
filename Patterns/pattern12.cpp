#include<iostream>
using namespace std;
//'A'+row+col-2 // we added 'A'- 1 on both side 
int main()
{
    int row = 1 ;
    int n;
    cout<<" Enter the Number: ";
    cin>>n;
    while (row<=n)
    {
        int col =1;
        /* code */
        while (col<=n)
        {
            /* code */
            char ch = 'A'+row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<"\n";
        row++;

    }
    
}