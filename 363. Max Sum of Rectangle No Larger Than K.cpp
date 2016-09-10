class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        if (matrix.size() == 0) return 0;
        int result = INT_MIN, row = matrix.size(), col = matrix[0].size();
        bool row_first = true;
        if (row > col){
            swap(row, col);
            row_first = false;
        }
        for (int row_num = 0 ; row_num < row ; row_num ++){
            vector<int> temp(col, 0);
            for (int i = row_num ; i >= 0 ; i --){
                set<int> sums;
                int sum = 0;
                sums.insert(sum);
                for (int j = 0 ; j < col ; j ++){
                    temp[j] = temp[j] + (row_first ? matrix[i][j] : matrix[j][i]);
                    sum = sum + temp[j];
                    auto it = sums.lower_bound(sum - k);
                    if (it != sums.end()) result = max(result, sum - *it);
                    sums.insert(sum);
                }
            }
        }
        return result;
    }
};