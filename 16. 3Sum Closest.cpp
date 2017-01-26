class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int gap = INT_MAX, result;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < nums.size() - 2 ; i ++){
            int start = i+1, end = nums.size()-1;
            while (start < end){
                int sum = nums[i] + nums[start] + nums[end];
                if (abs(sum-target) < gap){
                    gap = abs(sum-target);
                    result = sum;
                }
                if (sum < target) start ++;
                else end --;
            }
        }
        return result;
    }
};