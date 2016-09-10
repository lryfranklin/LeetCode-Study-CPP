class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int start = 0, end = numbers.size() - 1, sum;
        while (start < end){
            sum = numbers[start] + numbers[end];
            if (sum == target){
                result.push_back(start + 1);
                result.push_back(end + 1);
                break;
            }
            else if (sum > target) end -= 1;
            else start += 1;
        }
        return result;
    }
};