class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++){
           int j = target - nums[i];

           if (m.contains(j)) return {m[j], i};

           m[nums[i]] = i;
        }

        return {};
    }
};
