class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX, maximum = 0, diff;
        for (int i = 0 ; i < prices.size() ; i ++){
            minimum = min(minimum, prices[i]);
            diff = prices[i] - minimum;
            maximum = max(maximum, diff);
        }
        return maximum;
    }
};
