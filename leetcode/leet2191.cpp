#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to get the mapped integer based on the mapping array
int getMappedValue(int num, const vector<int>& mapping) {
    string numStr = to_string(num);
    string mappedStr;
    for (char digit : numStr) {
        int digitInt = digit - '0';  // Convert character digit to integer
        mappedStr += to_string(mapping[digitInt]);
        cout << mappedStr << endl;
    }
    cout << endl;
    return stoi(mappedStr);  // Convert the mapped string back to an integer
}

int main() {
    vector<int> mapping = {8, 9, 4, 0, 2, 1, 3, 5, 7, 6};
    vector<int> nums = {991, 338, 38};

    // Sort the nums array based on the mapped values using stable_sort
    stable_sort(nums.begin(), nums.end(), [&](int a, int b) {
        cout << "int A : " << a << " "<< endl;
        cout << "int B : " << b << " "<< endl;
        return getMappedValue(a, mapping) < getMappedValue(b, mapping);
    });

    // Print the sorted nums array
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
