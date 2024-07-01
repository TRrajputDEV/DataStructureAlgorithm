#include<iostream>
using namespace std;

//      pattern : 
/*      1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4     */

int main()
{
    int i = 1;  // starting point of i (rows)
    int n; // taking upto where we have to print (1 2 3 4 here n=4)
    cout<<" Enter the Row Length: "; // taking input
    cin>>n;
    while (i<=n) // here we want to print 4 rows so we will loop it for 4 times (i <= 4)
    {
        /* code */
        int j =1; // initailising int variablr for columns
        while (j<=n) // to where we have to run the program
        {
            /* code */
            std:: cout<< j <<" " ; // print it
            j++; // must thing to get out of loop
        }
        cout<<" \n";
        i=i+1; // for 1 loop
    }
    return 0;
}