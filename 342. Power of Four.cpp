class Solution1 {
public:
    bool isPowerOfFour(int num) {
        while ((num > 0) && num % 4 == 0){
            num = num / 4;
        }
        return num == 1;
    }
};

class Solution2 {
public:
    bool isPowerOfFour(int num) {
        return (num > 0 && ((log10(num) / log10(4)) - int(log10(num) / log10(4)) == 0));
    }
};

class Solution3 {
public:
    bool isPowerOfFour(int num) {
        return num > 0 && (!(num & (num - 1))) && (num & 0x55555555) == num;
    }
};

class Solution4 {
public:
    bool isPowerOfFour(int num) {
        return num > 0 && (!(num & (num - 1))) && ((num - 1) % 3) == 0;
    }
};