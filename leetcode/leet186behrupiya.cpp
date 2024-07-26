#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
        string s = "My Name is Tushar";
        int n = s.size();
        int start = 0;
        
        // Step 1: Reverse the entire array
        int end = n - 1;
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        
        // Step 2: Reverse each word
        start = 0;
        for (int i = 0; i <= n; ++i) {
            if (i == n || s[i] == ' ') {
                // Reverse the current word from `start` to `i - 1`
                int wordStart = start;
                int wordEnd = i - 1;
                while (wordStart < wordEnd) {
                    swap(s[wordStart], s[wordEnd]);
                    wordStart++;
                    wordEnd--;
                }
                // Move `start` to the next word
                start = i + 1;
            }
        }

        cout << s;
}