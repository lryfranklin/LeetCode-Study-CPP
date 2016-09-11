class Solution1 {
public:
    bool isPowerOfThree(int n) {
        return (n > 0 && ((log10(n) / log10(3)) - int(log10(n) / log10(3)) == 0));
    }
};

class Solution2 {
public:
    bool isPowerOfThree(int n) {
        return (n > 0 && 1162261467 % n == 0);
    }
};

class Solution3 {
public:
    bool isPowerOfThree(int n) {
        return (n > 0 && ((log10(n) / log10(3)) - int(log10(n) / log10(3)) == 0));
    }
};