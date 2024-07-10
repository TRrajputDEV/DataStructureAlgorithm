#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    // vector<int> ans;
    vector< vector<int> > ans; // overload vector
    int arr1[] = {1, 2 ,3 ,4, 5};
    int sum = 5;
    int size  = sizeof(arr1)/sizeof(arr1[0]);
    for(int i = 0 ; i < size ; i++)
    {
        int element = arr1[i];
        for(int j = 0 ; j < size ; j++)
        {
            if(arr1[i]<arr1[j] | arr1[i]==arr1[i+1] )
            {
            if(element+ arr1[j] == sum)
            {
                vector<int> temp;
                temp.push_back(min(arr1[i], arr1[j]));
                temp.push_back(max(arr1[i], arr1[j]));
                ans.push_back(temp);
                break;
            }
            }
        }
    }
 // Iterating Vector for the printout of ans

    for (const auto& row : ans) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}