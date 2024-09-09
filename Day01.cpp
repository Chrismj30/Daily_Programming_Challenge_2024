#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
 void sortNums(vector<int>& nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }
 }
};

int main(){
    Solution s;
    vector<int> nums={0, 1, 2, 1, 0, 2, 1, 0};
    s.sortNums(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}