class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l = size(nums) - 1;

        
        sort(nums.begin(),nums.end());
        for(int i=0;i<l;i++)
        {
            if(nums[i]==nums[i+1])
            return true;

        }
        return false;
    }
};