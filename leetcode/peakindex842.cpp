#include<iostream>
using namespace std;

int peakindex(int arr[] , int n)
{
    int s = 0;
    int e = n-1;
    int mid;
    while(s<=e)
    {
        mid = s + (e - s)/2;
        if(arr[mid] > arr[mid-1] & arr[mid] > arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid] > arr[mid-1] & arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
}


int main()
{
    int arr[4] = {0,5,10,2};
    cout << "Peak Index in a Mountain Array at index is : " <<peakindex(arr, 4);

}