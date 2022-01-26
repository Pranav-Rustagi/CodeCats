// https://leetcode.com/problems/toeplitz-matrix/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0, iLim = matrix.size() - 1, jLim = matrix.front().size() - 1 ; i < iLim ; i++)
            for(int j = 0 ; j < jLim ; j++)
                if(matrix[i][j] != matrix[i + 1][j + 1])
                    return false;
        return true;
    }
};