class Solution {
public:
    string reverseString(string s) {
        int start = 0, end = s.length() - 1;
        char temp;
        while (start < end){
            temp = s.at(start);
            s.at(start) = s.at(end);
            s.at(end) = temp;
            start++; end--;
        }
        return s;
    }
};
