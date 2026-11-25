class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hm;

        for (int i = 0; i < nums.size(); i++)
        {
            if (hm[nums[i]] == 1) return true;
            hm[nums[i]]++;
        }
        return false;
    }
};