#include<iostream>
#include<vector>
using namespace std;


int moveZeroes(vector<int> nums, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            nums[i] = 0;
            j++;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i]<<" ";
    }
    
}

int main()
{
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();
    moveZeroes(nums,n);
}