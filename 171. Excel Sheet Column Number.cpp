class Solution {
public:
    int titleToNumber(string s) {
        int result = 0, temp = 1;
        for (int i = s.size() - 1 ; i >= 0 ; i --){
            result += (int)(s[i] - 'A' + 1) * temp;
            temp *= 26;
        }
        return result;
    }
};