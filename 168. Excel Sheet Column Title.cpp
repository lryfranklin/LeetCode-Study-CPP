class Solution {
public:
    string convertToTitle(int n) {
        string result = "";
        while (n != 0){
            if (n % 26 == 0){
                result += 'Z';
                n -= 26;
            }
            else {
                result += n % 26 + 'A' - 1;
                n -= n % 26;
            }
            n /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};