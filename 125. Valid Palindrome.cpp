class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) return true;
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (!isValidChar(s[start])) start ++;
            else if (!isValidChar(s[end])) end --;
            else if ((s[start] + 32 - 'a') % 32 != (s[end] + 32 - 'a') % 32) return false;
            else {
                start ++; end --;
            }
        }
        return true;
    }
    bool isValidChar(char c){
        if (c >= 'A' && c <= 'Z') return true;
        if (c >= 'a' && c <= 'z') return true;
        if (c >= '0' && c <= '9') return true;
        return false;
    }
};