class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix.empty()) return result;
        int row = matrix.size(), col = matrix[0].size();
        int count = row > col ? (col + 1) / 2 : (row + 1) / 2; //(min(row, col) + 1) / 2;
        for (int i = 0 ; i < count ; i++, row -= 2, col -= 2){
            for (int j = i ; j < i + col ; j++)
                result.push_back(matrix[i][j]);
            for (int k = i + 1 ; k < row + i ; k ++)
                result.push_back(matrix[k][col+i-1]);
            if (row == 1 || col == 1) break;
            for (int j = i + col - 2 ; j >= i ; j--)
                result.push_back(matrix[row+i-1][j]);
            for (int k = i + row - 2 ; k > i ; k--)
                result.push_back(matrix[k][i]);
        }
        return result;
    }
};