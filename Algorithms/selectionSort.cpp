#include<iostream>
using namespace std;

int sorting(int arr[] , int n)
{
    for(int i= 0; i < n- 1; i++)
    {
        int minIndex = i;
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    for(int i = 0; i < n ; i++ )
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {6,2,8,4,10};
    sorting(arr,5);
}