#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    for(int i = n-1; i >= 0; i--) // Start from n-1 down to 0
    {
        cout << arr[i] <<" ";
    }
    cout << endl; // Print a newline after reversing
}

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Element at index #" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Array reversed is: ";
    reverse(arr, n); // Call the reverse function to print the reversed array
    return 0;
}
