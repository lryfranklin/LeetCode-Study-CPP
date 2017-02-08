class Solution {
public:
    bool isHappy(int n) {
        vector<int> temp;
        while (1){
            int sum = 0, semiresult = n;
            while (semiresult != 0){
                sum += pow(semiresult % 10, 2);
                semiresult /= 10;
            }
            if (find(temp.begin(), temp.end(), sum) != temp.end()){
                if (sum == 1) return true;
                else return false;
            }
            else temp.push_back(sum);
            n = sum;
        }
    }
};