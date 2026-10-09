class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            currCount = (nums[i] != 1) ? 0 : currCount + 1;
            maxCount = (currCount > maxCount) ? currCount : maxCount;
        }
        return maxCount;
    }
};