class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> rtoi_map{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0 ; i < s.length() ; i++){
            int temp = rtoi_map[s[i]];
            if ((i == s.length() - 1) || (temp >= rtoi_map[s[i+1]])) result += temp;
            else result -= temp;
        }
        return result;
    }
};