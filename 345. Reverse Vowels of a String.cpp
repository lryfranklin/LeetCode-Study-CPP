class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.length() - 1;
        vector<char> vowls{'a','e','i','o','u','A','E','I','O','U'};
        char temp;
        //bool vow1 = false, vow2 = false;
        while (start < end){
            while (start < s.length() - 1){
                if (find(vowls.begin(), vowls.end(), s[start]) == vowls.end()) start ++;
                else {
                    break;
                }
            }
            while (end > 0){
                if (find(vowls.begin(), vowls.end(), s[end]) == vowls.end()) end --;
                else break;
            }
            if (start < end){
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start ++; end --;
            }
        }
        return s;
    }
};
