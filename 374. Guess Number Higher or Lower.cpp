// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n;
        while (start < end){
            int mid = (end - start) / 2 + start;
            int comparison = guess(mid);
            if (comparison == 0) return mid;
            if (comparison == 1) start = mid + 1;
            else end = mid - 1;
        }
        return start;
    }

};
