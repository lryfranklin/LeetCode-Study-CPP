class Solution1 {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        while (n > 0){
            count = count + (n & 1);
            n = n >> 1;
        }
        return count == 1;
    }
};

class Solution2 {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && (!(n & (n - 1)));
    }
};