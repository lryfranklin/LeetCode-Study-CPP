class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> result(s.size()+1, false);
        result[0] = true;
        for (int i = 0 ; i < s.size() + 1 ; i ++){
            for (int j = 0 ; j < i ; j ++){
                if (result[j] && (find(wordDict.begin(), wordDict.end(), s.substr(j, i-j)) != wordDict.end())){
                    result[i] = true;
                    break;
                }
            }
        }
        return result[s.size()];
    }
};