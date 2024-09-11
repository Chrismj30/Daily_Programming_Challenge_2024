#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do {
            slow=nums[slow];
            fast=nums[nums[fast]];
        } while(slow != fast);
        slow=nums[0];
        while(slow!=fast) {
            slow=nums[slow];
            fast=nums[fast];
        }      
        return slow; 
    }
};

int main() {
    Solution s;
    vector<int> nums={3, 1, 3, 4, 2};
    cout<<"Duplicate Number: "<<s.findDuplicate(nums)<< endl;
    return 0;
}
