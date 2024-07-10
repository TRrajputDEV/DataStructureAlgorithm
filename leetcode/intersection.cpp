#include <iostream>  // For std::cout
#include <vector>    // For std::vector

using namespace std;

int main() {
    vector<int> ans;
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < size1; i++) {
        int element = arr1[i];
        for (int j = 0; j < size2; j++) {
            if (element == arr2[j]) {  // Corrected equality check
                ans.push_back(element);
                arr2[j] = -1;  // Mark as seen
                break;
            }
        }
    }

    // Correct way to get the size of the vector
    int size3 = ans.size();
    for (int i = 0; i < size3; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
