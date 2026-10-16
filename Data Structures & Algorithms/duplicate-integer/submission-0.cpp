class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;

        for (int n : nums) {
            if (m.contains(n)) return true;
            else m[n]++; 
        }

        return false;
    }
};