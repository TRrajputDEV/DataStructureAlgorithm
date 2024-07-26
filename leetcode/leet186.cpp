#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    string s = "My Name is Tushar";

        int n = s.size();
        int start = 0;
        
        // Step 1: Reverse each word
        for (int i = 0; i <= n; ++i) {
            // When we reach the end of the string or a space
            if (i == n || s[i] == ' ') {
                int wordStart = start;
                int wordEnd = i - 1;
                // Reverse the current word from `start` to `i - 1`
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