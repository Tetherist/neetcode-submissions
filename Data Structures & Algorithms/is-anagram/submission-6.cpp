class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<int, int> sMap;
        std::unordered_map<int, int> tMap;

        for (int i = 0; i < s.length(); i++)
        {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        
        for (int j = 0; j < s.length(); j++)
        {
            if (sMap[s[j]] != tMap[s[j]]) return false;
        }
        
        return true;
    }
};
