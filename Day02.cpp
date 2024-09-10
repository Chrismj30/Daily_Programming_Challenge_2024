#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num=1;
        for(int i=0;i<nums.size();i++){
            if(num!=nums[i]){
                return num;
            }
            num++;
        }
        return num;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1, 2, 4, 5};
    int res=s.missingNumber(arr);
    cout<<"Missing Number: "<<res;
}