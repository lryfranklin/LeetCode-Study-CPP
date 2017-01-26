class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> sumAB;
        int n = A.size(), result = 0;
        for (int i = 0 ; i < n ; i ++){
            for (int j = 0 ; j < n ; j++){
                sumAB[A[i] + B[j]]++;
            }
        }
        for (int i = 0 ; i < n ; i ++){
            for (int j = 0 ; j < n ; j++){
                result += sumAB[-(C[i] + D[j])];
            }
        }
        return result;
    }
};