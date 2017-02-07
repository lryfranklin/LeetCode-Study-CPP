class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> empty;
        result.push_back(empty);
        if (nums.size() == 0) return result;
        for (int i = 0 ; i < nums.size() ; i++){
            vector<int> semiresult;
            subsetsDFS(result, nums, i, semiresult);
        }
        return result;
    }
    void subsetsDFS(vector<vector<int>> &result, vector<int>& nums, int position, vector<int> &semiresult){
        semiresult.push_back(nums[position]);
        result.push_back(semiresult);
        for (int i = 1 ; i < nums.size() - position; i ++)
            subsetsDFS(result, nums, position+i, semiresult);
        semiresult.pop_back();
    }
};