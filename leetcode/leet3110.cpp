#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string s = "hello";
    int count = 0;
    int n = s.size();

    for(int i = 0; i < n - 1; i++)
    {
        count = count + abs(s[i]-s[i+1]);
    }
    cout << "Absolute is : " << count;
}