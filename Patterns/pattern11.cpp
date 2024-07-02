#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    int n;
    cout << " Enter the number: ";
    cin>>n;
    int count = 0; // see keep count outside both loop 
    while (row<=n)
    {
        /* code */
        int col =1;
        while (col<=n)
        {
            /* code */
            char ch = 'A'+ count; // formula here all good
            cout<<ch<<" ";
            count++;
            col++;
            
        }
        cout<<"\n";
        row++;
    }
    
}