class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp; // val -> index

        for (int i = 0; i < n; i++) {
            int compliment = target - nums[i];
            if (mp.find(compliment) != mp.end()) {
                return {mp[compliment], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};