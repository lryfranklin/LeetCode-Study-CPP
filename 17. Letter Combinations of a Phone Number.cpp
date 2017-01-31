class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.size() == 0) return result;
        string dict[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        letterCombinationsDFS(digits, dict, result, 0, "");
        return result;
    }
    void letterCombinationsDFS(string digits, string dict[], vector<string> &result, int position, string single){
        if (position == digits.size()) result.push_back(single);
        else{
            string temp = dict[digits[position] - '2'];
            for (int i = 0 ; i < temp.size() ; i++){
                single.push_back(temp[i]);
                letterCombinationsDFS(digits, dict, result, position+1, single);
                single.pop_back();
            }
        }
    }
};