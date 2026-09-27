class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> numsHash;
        for (int i = 0; i < nums.size(); i++) {
            numsHash[nums[i]]++;
            auto autoSearch = numsHash.find(nums[i]);
            if (autoSearch->second > 1) {
                return true;
            }
         }
    return false;
    }
};