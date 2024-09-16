#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int n=s.size();
        int left=0;
        int right=0;
        while(i<n){
            while(s[i]==' ' && i<n){
                i++;
            }
            if(i==n){
                break;
            }
            while(s[i]!=' ' && i<n){
                s[right++]=s[i++];
            }
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' ';
            left=right;
            i++;
        }
        s.resize(right-1);
        return s;
    }
};

int main(){
    Solution s;
    string str="the sky is blue";
    cout<<s.reverseWords(str);
}