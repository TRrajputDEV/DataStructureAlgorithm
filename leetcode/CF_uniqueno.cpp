#include<iostream>
using namespace std;
// COMMIT EDIT
int main()
{

    int n ;
    int flag ;
    cout<<"Enter the Length of the array: ";
    cin>> n;
    int arr[n];
    for( int i = 0 ; i <= n ; i++)
    {
        cout<<"Enter the Element at index #"<< i + 1 ;
        cin>> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int lookele = arr[i];
        int j = 1;
        while(j<=n)
        {
            if (arr[j] == lookele)
            {
                cout<<" for element at index #: "<<i << "same element found at #: "<< j << std::endl;
            }
            else{
                cout<<"Not the same" << endl;
            }
        }
    }
    

}
