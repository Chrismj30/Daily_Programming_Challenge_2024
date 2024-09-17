#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            bool match=true;
            for(int j=1;j<strs.size();j++){
                if(c!=strs[j][i] || strs[j].size()<i){
                    match=false;
                    break;
                }
            }
            if(match==false){
                break;
            }
            else{
                ans.push_back(c);
            }
        }
        return ans;
        
    }
};

int main(){
    Solution s;
    vector<string> str={"flower", "flow", "flight"};
    cout<<s.longestCommonPrefix(str);
}