class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nqCount = 0;
        for (int num : nums)
            if (num != val)
                swap(nums[nqCount++], num);
        return nqCount;
    }
};