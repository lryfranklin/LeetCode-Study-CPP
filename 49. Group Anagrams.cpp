class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        if (strs.size() == 0) return result;
        unordered_map<string, vector<int>> anagrams;
        for (int i = 0 ; i < strs.size() ; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            anagrams[s].push_back(i);
        }
        for (auto it = anagrams.begin() ; it != anagrams.end() ; it++){
            vector<string> semiresult;
            vector<int> nums;
            nums = it->second;
            for (int i = 0 ; i < nums.size() ; i++){
                semiresult.push_back(strs[nums[i]]);
            }
            result.push_back(semiresult);
        }
        return result;
    }
};