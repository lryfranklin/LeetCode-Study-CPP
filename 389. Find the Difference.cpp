class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> s_hash(26, 0);
        char result;
        for (int i = 0 ; i < s.length() ; i ++){
            s_hash[s[i] - 'a'] ++;
        }
        for (int j = 0 ; j < t.length() ; j ++){
            s_hash[t[j] - 'a']--;
            if (s_hash[t[j] - 'a'] < 0) {
                result = t[j];
                break;
            }
        }
        return result;
    }
};
