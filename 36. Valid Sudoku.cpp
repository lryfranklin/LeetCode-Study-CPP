class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.size() == 0 || board[0].size() == 0) return false;
        int row = board.size(), col = board[0].size();
        vector<vector<bool>> rowMark(row, vector<bool>(col, false));
        vector<vector<bool>> colMark(row, vector<bool>(col, false));
        vector<vector<bool>> cellMark(row, vector<bool>(col, false));
        for (unsigned int i = 0 ; i < row ; i ++){
            for (unsigned int j = 0 ; j < col ; j++){
                if (board[i][j] >= '1' && board[i][j] <= '9'){
                    int element = board[i][j] - '1';
                    if (rowMark[i][element] || colMark[element][j] || cellMark[3 * (i / 3) + j / 3][element])
                        return false;
                    rowMark[i][element] = true;
                    colMark[element][j] = true;
                    cellMark[3 * (i / 3) + j / 3][element] = true;
                }
            }
        }
        return true;
    }
};