class Solution {
public:
    int myAtoi(string str) {
        if (str.length() == 0) return 0;
        int i = 0, n = str.length(), sign = 1, result = 0;
        while (i < n && str[i] == ' ') i ++;
        if (str[i] == '+' || str[i] == '-'){
            sign = str[i] == '+' ? 1 : -1;
            i ++;
        }
        while (i < n && (str[i] >= '0' && str[i] <= '9')){
            if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && str[i] - '0' > 7)){
                if (sign == 1) result = INT_MAX;
                else result = INT_MIN;
                break;
            }
            result = result * 10 + (str[i] - '0');
            i++;
        }
        return result * sign;
    }
};