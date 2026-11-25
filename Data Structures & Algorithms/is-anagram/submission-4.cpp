class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        unordered_map<char, int> s_letters;
        unordered_map<char, int> t_letters;

        for (int i = 0; i < s.size(); i++)
        {
            s_letters[s[i]]++;
            t_letters[t[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s_letters[s[i]] != t_letters[s[i]]) return false;
        }
        return true;



        
    }
};
