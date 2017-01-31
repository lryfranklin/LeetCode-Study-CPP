class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> result;
        vector<int> combination;
        if (candidates.size() == 0) return vector<vector<int>>(result.begin(), result.end());
        combinationSumDFS(result, candidates, target, combination, 0, 0);
        return vector<vector<int>>(result.begin(), result.end());
    }
    void combinationSumDFS(set<vector<int>> &result, vector<int>& candidates, int target, vector<int> combination, int sum, int position){
        if (sum > target) return;
        else if (sum == target) result.insert(combination);
        else {
            for (int j = position ; j < candidates.size() ; j++){
                if (candidates[j] > target) continue;
                combination.push_back(candidates[j]);
                sum += candidates[j];
                combinationSumDFS(result, candidates, target, combination, sum, j);
                combination.pop_back();
                sum -= candidates[j];
            }
        }
    }
};