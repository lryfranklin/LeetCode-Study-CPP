class Solution1 {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < nums.size() ; i += 3){
            if (nums[i] != nums[i+2]) return nums[i];
        }
        return nums[nums.size() - 1];
    }
};

class Solution2 {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i= 31 ; i >= 0; i --) {
            int sum = 0;
            int mask = 1 << i;
            for(int j = 0 ; j < nums.size() ; j ++) {
                if(nums[j] & mask) sum++;
            }
            res = (res << 1) + (sum % 3);
        }
        return res;
    }
};
