class Solution {
public:
    int reverse(int x) {
        int result = 0;
        bool negative = false;
        if (x < 0) negative = true;
        while (x != 0){
            if (abs(result) > 214748364) return 0;
            if ((abs(result) == 214748364) && (x % 10 > 7) && !negative) return 0;
            if ((abs(result) == 214748364) && (x % 10 > 8) && negative) return 0;
            result = result * 10 + (x % 10);
            x = x / 10;
        }
        return result;
    }
};