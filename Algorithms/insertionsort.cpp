#include<iostream>
#include<vector>
using namespace std;

int insertionSort(vector<int> &arr , int n)
{
    for(int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(; j >=0; j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
                
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    vector<int> arr = {4 ,12, 11 ,20};

    insertionSort(arr , 4);
}