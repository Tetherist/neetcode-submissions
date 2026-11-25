class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hmap;

        for (int i = 0; i < nums.size(); i++)
        {
            if (hmap[nums[i]] > 0) return true;
            hmap[nums[i]]++;
        }

        return false;
    }
};