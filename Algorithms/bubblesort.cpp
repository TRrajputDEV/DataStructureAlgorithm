#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n-1; i++)
    {
        swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, then the array is sorted
        if (!swapped)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int arr[6] = {4,2,6,8,10,1};
    bubbleSort(arr, 6);
}