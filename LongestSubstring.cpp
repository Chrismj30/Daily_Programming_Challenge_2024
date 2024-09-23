#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int start=0;
        int max_len=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[start]]--;
                start++;
            }
            count=i-start+1;
            max_len=max(max_len,count);
        }

        return max_len;
    }
};

int main(){
    Solution s;
    string s="abcabcbb";
    cout<<s.lengthOfLongestSubstring(s);
    return 0;
}