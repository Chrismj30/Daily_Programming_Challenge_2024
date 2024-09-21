#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int expand(string& s,int i,int j){
        while(i>=0 && j<s.size() && s[i]==s[j]){
            i--;
            j++;
        }
        return j-i-1;        
    }
    string longestPalindrome(string s){
        if(s.size()<=1){
            return s;
        }
        int maxlength=1; 
        int start=0;
        for(int i=0;i<s.size();i++){
            int len1=expand(s,i,i);
            int len2=expand(s,i,i+1);

            int len=max(len1,len2);
            if(len>maxlength){
                maxlength=len;
                start=i-(len-1)/2;
            }
        }
        return s.substr(start,maxlength);    
    }
};

int main(){
    Solution s;
    string str="babad";
    cout<<s.longestPalindrome(str);
    
    return 0;
}