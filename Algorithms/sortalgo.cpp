#include<iostream>
#include<vector>
using namespace std;

int insertionSort(vector<int> &arr , int n)
{
    for(int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        cout<<"Temp : "<<temp<<endl;
        int j = i-1;
        cout<<"J is : " << j <<endl;
        cout<<"Element J is :" << arr[j] << endl;
        cout<<"I is : " << i <<endl;
        cout << "element i is: " << arr[i] << endl;
        for(; j >=0; j--)
        {
            if(arr[j] > temp)
            {
                //shift

                arr[j+1] = arr[j];
                for(int i = 0 ; i < n ; i++)
                {
                    cout << arr[i] <<" ";
                    
                }
                cout <<endl;
            }
            else
            {
                break;
            }
        }
        cout<<"element arr[j+1] is : " << arr[j+1] << endl;
        cout<<"element arr[j] is : " << arr[j] << endl;
        arr[j+1] = temp;
        for(int i = 0 ; i < n ; i++)
                {
                    cout << arr[i] <<" ";
                    
                }
                cout<<endl;
        cout<<"element arr[j+1] is : " << arr[j+1] << endl;
        cout << "temp val is: " << temp<< endl;
        cout<<endl;
    }

    cout << "SORTED ARRAY :" <<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    vector<int> arr = {10,1,7,4,8,2,11};

    insertionSort(arr , 7);
}