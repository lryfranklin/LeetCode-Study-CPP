class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        return max(robsub(nums, 0, nums.size()-1), robsub(nums, 1, nums.size()));
    }
    int robsub(vector<int> &nums, int left, int right){
        if (right - left <= 1) return nums[left];
        vector<int> result{nums[left], max(nums[left], nums[left+1])};
        for (int i = left + 2 ; i < right ; i ++){
            result.push_back(max(nums[i] + result[i-left-2], result[i-left-1]));
        }
        return result.back();
    }
};
