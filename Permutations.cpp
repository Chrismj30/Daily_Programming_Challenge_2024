#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(string& s, int start, vector<string>& result) {
        if (start==s.size()) {
            result.push_back(s);
            return;
        }

        unordered_set<char> set; 
        for (int i=start;i<s.size();++i) {
            if(set.count(s[i])) continue;
            set.insert(s[i]);
            swap(s[start], s[i]);  
            backtrack(s, start + 1, result);  
            swap(s[start], s[i]);   
        }
    }

    vector<string> permuteUnique(string s){
        vector<string> result;
        sort(s.begin(),s.end());  
        backtrack(s, 0, result);
        return result;
    }
};

int main() {
    Solution sol;
    string s="abc";  
    vector<string> permutations=sol.permuteUnique(s);
    for (const string& perm:permutations) {
        cout<<perm<<endl;
    }

    return 0;
}
