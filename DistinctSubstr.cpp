#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s, int k) {
        int count = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> charCount;
            int distinctCount = 0;

            for (int j = i; j < n; j++) {
                // If this character is seen for the first time, increment distinct count
                if (charCount[s[j]] == 0) {
                    distinctCount++;
                }
                charCount[s[j]]++;

                // If distinct count exceeds k, break
                if (distinctCount > k) {
                    break;
                }

                // If distinct count is exactly k, count this substring
                if (distinctCount == k) {
                    count++;  // Count current substring
                }
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    string s = "aabacbebebe";
    int k = 3;
    cout << "Count of substrings with " << k << " distinct characters: " << sol.countSubstrings(s, k) << endl;
    return 0;
}
