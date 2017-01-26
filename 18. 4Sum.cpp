class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int> > result;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < int(nums.size() - 3) ; i ++){
            for (int j = i + 1 ; j < int(nums.size() - 2) ; j ++){
                int start = j + 1, end = nums.size() - 1;
                while (start < end){
                    int sum = nums[i] + nums[j] + nums[start] + nums[end];
                    if (sum == target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        result.insert(temp);
                        start++; end--;
                    }
                    else if (sum < target) start++;
                    else end--;
                }
            }
        }
        return vector<vector<int> > (result.begin(), result.end());
    }
};