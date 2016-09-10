class Solution1 {
public:
    vector<int> countBits(int num) {
        if (num == 0) return {0};
        vector<int> result{0,1};
        int k = 2, i = 2;
        while (i <= num){
            int t = (pow(2, k) - pow(2, k - 1)) / 2;
            for (i = pow(2, k - 1) ; i < pow(2, k) ; i++){
                if (i > num) break;
                if (i < pow(2, k - 1) + t) result.push_back(result[i - t]);
                else result.push_back(result[i - t] + 1);
            }
            k ++;
        }
        return result;
    }
};

class Solution2 {
public:
    vector<int> countBits(int num) {
        vector<int> result = {0};
        for (int i = 1 ; i <= num ; i++){
            if (i % 2 == 0) result.push_back(result[i / 2]);
            else result.push_back(result[i / 2] + 1);
        }
        return result;
    }
};