#include<iostream>
using namespace std;

void checkunique(int arr[], int size)
{
    int element = 0;
    int n2 = 1;
    int countarr[n2];
    int size2 = sizeof(countarr)/ sizeof(countarr[0]);
    int count = 0;
    for(int j=0 ; j<size ; j++)
    {
        element = arr[j]; // giving value to element.
        for(int i=0 ; i< size ; i++)
        {
            if(arr[i] == element) // checking the occurance
            {
                count++;
            }
        }
        for(int k = 0; k < size2 ; k++)
        {
            countarr[k] = count; // assigning the value of count every tine
        }
        n2++; // increasing the size of array of counts
        count = 0; // resetting count to 0 everytime loop goes.
    }
    //printing array of counts
    for(int i = 0 ; i<size2 ; i++)
    {
        cout<< countarr[i]<<" ";
    }
    // cout<<"The number of occurance of element is : "<< count;
}

int main()
{
    int n ;
    cout<<"Enter the Length of the array: ";
    cin>> n;
    int arr[n];
    for( int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the Element at index #"<< i + 1<<": ";
        cin>> arr[i];
    }
    checkunique(arr,n);
    return 0;
}