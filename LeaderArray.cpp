#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> leader(vector<int>& nums){
        vector<int> ans;
        int n=nums.size();
        if(n==0) return ans;
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>maxi){
                maxi=nums[i];
                ans.push_back(maxi);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums={16, 17, 4, 3, 5, 2};
    vector<int> result=s.leader(nums);
    for(auto it:result){
        cout<<it<<" ";
    }
}