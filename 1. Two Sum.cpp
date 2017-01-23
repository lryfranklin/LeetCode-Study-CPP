class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        if (nums.size() == 0) return result;
        int i = 0;
        while (i < nums.size()){
            int j = i + 1;
            while (j < nums.size()){
                if (nums[j] == (target - nums[i])){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                else j ++;
            }
            i ++;
        }
    }
};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i = 0 ; i < nums.size() ; i ++) m[nums[i]] = i;
        for (int i = 0 ; i < nums.size() ; i ++){
            int remain = target - nums[i];
            if (m.count(remain) > 0 && m[remain] != i){
                result.push_back(i);
                result.push_back(m[remain]);
                return result;
            }
        }
        return result;
    }
};