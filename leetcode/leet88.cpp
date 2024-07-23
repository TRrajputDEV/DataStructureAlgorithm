#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums1 ={1,2,3};
    vector<int> nums2 ={2,5,6};

    for (int i = 0; i < 3; i++)
    {
        nums1.push_back(nums2[i]);
    }

    sort(nums1.begin(), nums1.end());

    for (int i = 0; i < 6; i++)
    {
        cout << nums1[i] <<" ";
    }
    
    

}