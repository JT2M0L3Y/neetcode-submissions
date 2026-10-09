class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currCount = 0;

        for (int num : nums) {
            if (num == 1) {
                currCount++;
                // update max only on 1 case
                if (currCount > maxCount)
                    maxCount = currCount;
            } else {
                currCount = 0;
            }
        }

        return maxCount;
    }
};