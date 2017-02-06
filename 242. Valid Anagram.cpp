class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        if (s.size() == 0 && t.size() == 0) return true;
        unordered_map<char, int> letters;
        for (int i = 0 ; i < s.size() ; i ++){
            letters[s[i]] ++;
            letters[t[i]] --;
        }
        for (auto it = letters.begin() ; it != letters.end() ; it ++){
            if (it->second != 0) return false;
        }
        return true;
    }
};