#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0; // start of array
    int end = size - 1; // end of array
    int mid; // mid of array (cant use  s+e/2 coz there will be problem with the overflow so we will subtract and divide)
    
    while(start <= end) // condition for running code because every we go through loop we got value shifted so we want that e > start so to keep runing code
    {
        mid = start + (end - start) / 2; // safer way to calculate mid ( this is inside loop so we re not mannualy updating we did used mid outside loop then we wi;; need to update mid below else statement)

        if(arr[mid] == key) // check if the key is at mid
        {
            return mid;
        }
        if(key > arr[mid]) // check if key > index value gotta be on right side of array 
        {
            start = mid + 1; // so we bring the start index to + 1 of mid and end index is same
        }
        else
        {
            end = mid - 1; // if key < index value then we will shift the end value to one behind mid value .... mid - 1 
        }
    }
    return -1; // return -1 if nothing found  (-_-)
}

int main()
{
    int Even[6] = {1, 2, 3, 4, 5, 6};
    int Odd[5] = {1, 2, 3, 4, 5};
    
    int index = BinarySearch(Even, 6, 56);
    cout << "Element found at: " << index << endl;

    return 0;
}
