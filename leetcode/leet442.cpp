#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,3,2,7,8,2,3,1};
    int ans = 0;
    for(int i = 0; i < 8; i++ )
    {
        ans = ans ^ arr[i];
    }
    for (int i = 0; i < 8; i++)
    {
        ans = ans ^ i;
    }
    cout<<" numbers are: " << ans;
    
}