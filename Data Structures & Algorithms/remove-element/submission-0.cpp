class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // reducing window to check from front
        int nqCount = 0;

        for (int i = nqCount; i < nums.size(); i++) {
            // drop/add elements vs swap values at indices
            int swp;
            if (nums[i] != val) {
                swp = nums[nqCount];
                nums[nqCount] = nums[i];
                nums[i] = swp;
                nqCount++;
            }
        }

        return nqCount;
    }
};