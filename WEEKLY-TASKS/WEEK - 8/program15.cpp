// https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, matSize = mat.size();
        for(int i = 0 ; i < matSize ; i++) {
            sum += mat[i][i];
            if(i != matSize - i - 1)
                sum += mat[i][matSize - i - 1];
        }
        return sum;
    }
};