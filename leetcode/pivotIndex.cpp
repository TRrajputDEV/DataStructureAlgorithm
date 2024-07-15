#include<iostream>
using namespace std;

int pivotIndex(int arr[] , int n)
{
    int s = 0;
    int e = n-1;
    int mid;
    while(s<=e)
    {
        int sum1 = 0;
        int sum2 = 0;
        mid = s + (e - s )/ 2;
        for(int i = 0 ; i < mid ; i++)
        {
            sum1 = sum1 + arr[i];
        }
        for(int j = mid+1 ; j < n ; j++)
        {
            sum2 = sum2 + arr[j];
        }
        // Binary search concept

        if(sum1 == sum2)
        {
            return mid;
        }
        else if(sum1 > sum2)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    } 
    return -1;
}


int main()
{
    int arr[3] = {1,2,3};
    cout << "Pivot index is at : " << pivotIndex(arr , 6);
}