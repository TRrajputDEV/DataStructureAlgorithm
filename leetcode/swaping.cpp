#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number of element: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Element at index #" << i + 1 << ": ";
        cin >> arr[i];
    }
    int start = 0;
    int end = 1;
    while (end <= n)
    {
        if (start + 1 < n)
        {
            swap(arr[start], arr[end]);
            start = start + 2;
            end = end + 2;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
