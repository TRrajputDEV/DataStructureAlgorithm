#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int array[size];
    cout << "Enter the elements of the array: " << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Element at index #" << i+1 << ": ";
        cin >> array[i];
    } 

    //sorting of array
    int temp; // creating an temporary variable to store the number.
    for(int i=0 ; i < size-1 ; i++)// iterating through the array.
    {
        for(int j=0 ; j < size-i-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    //printing sorted array
    for(int i=0 ;i<size;i++)
    {
        cout<<" "<<array[i] <<endl;
    }

    //getting output
    if(size % 2 == 0)
    {
        for(int i = 0 ; i< size ; i=i+3)
        {
            if(array[i] != array[i+1])
            {
                cout<<"element is: "<< array[i]; 
            }
        }
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
           ans = ans ^ array[i];
        }
        
    }

}