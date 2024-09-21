#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        string temp="";
        vector<vector<string>> ans;
        for(auto it:strs ){
            temp=it;
            sort(it.begin(),it.end());
            map[it].push_back(temp);          
        }

        for(auto st:map ){
            ans.push_back(st.second);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<string> str={"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res=s.groupAnagrams(str);
    for(auto group:res){
        cout<<"[";
        for(auto word:group){
            cout<<word<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}