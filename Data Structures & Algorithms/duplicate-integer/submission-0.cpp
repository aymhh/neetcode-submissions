class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int arrayLength = nums.size();

        for (int i = 0; i < arrayLength; i++){
            int elementIQ = nums[i];
            for(int j = 0; j < arrayLength; j++) {
                if(elementIQ == nums[j] && i != j) {
                    return true;
                }
            }
        } 
        return false;
    }
};