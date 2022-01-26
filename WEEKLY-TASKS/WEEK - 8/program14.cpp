// https://leetcode.com/problems/lucky-numbers-in-a-matrix/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> minInRow(m, INT_MAX), maxInColumn(n, 0);
        
        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(maxInColumn[j] < matrix[i][j])
                    maxInColumn[j] = matrix[i][j];
                if(minInRow[i] > matrix[i][j])
                    minInRow[i] = matrix[i][j];
            }
        }
        
        unordered_map<int, int> freq;
        for(int& el: minInRow)
            freq[el]++;
        for(int& el : maxInColumn)
            if(freq[el])
                return {el};
        return {};
    }
};