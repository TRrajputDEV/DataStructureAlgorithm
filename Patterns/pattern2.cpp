#include <iostream>
using namespace std;

//      pattern :
/*      4 3 2 1
        4 3 2 1
        4 3 2 1
        4 3 2 1    */

int main()
{
    int i = 1;
    int n;
    cout << " Enter How Many Rows You Want : ";
    cin >> n;
    // loop

    while (i <= n)
    {
        /* code */
        int j = 1;
        while (j <= n)
        {
            /* code */
            cout << n - j + 1 << " "; // here only the formula is important how this came into existense , everything else is same .
            j++;
        }
        cout << "\n";
        i++;
    }
}