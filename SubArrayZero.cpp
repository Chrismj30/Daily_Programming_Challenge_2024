#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subarray(vector<int>& nums) {
        unordered_map<int, vector<int>> map;  
        vector<vector<int>> ans;
        int sum = 0;
        map[0].push_back(-1);
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];  
            if (map.find(sum) != map.end()) {
                for (auto it : map[sum]) {
                    ans.push_back({it+1,i});
                }
            }
            map[sum].push_back(i);
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, -3, 3, -1, 2};
    vector<vector<int>> result = s.subarray(nums);

    for (auto it : result) {
        cout << "[" << it[0] << "," << it[1] << "] ";
    }
}
