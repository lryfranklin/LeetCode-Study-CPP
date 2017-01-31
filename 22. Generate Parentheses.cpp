class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        if (n == 0) return result;
        generateParenthesisDFS(n, n, result, "");
        return result;
    }
    void generateParenthesisDFS(int left, int right, vector<string> &result, string temp){
        if (left > right) return;
        if (left == 0 && right == 0) result.push_back(temp);
        else{
            if (left > 0) generateParenthesisDFS(left - 1, right, result, temp + '(');
            if (right > 0) generateParenthesisDFS(left, right - 1, result, temp + ')');
        }
    }
};