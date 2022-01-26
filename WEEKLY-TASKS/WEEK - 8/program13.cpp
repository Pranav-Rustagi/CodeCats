// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0, m = grid.size(), colPtr = grid[0].size() - 1, i = 0;
        while(i < m && colPtr >= 0) {
            if(grid[i][colPtr] < 0) {
                count += (m - i);
                colPtr--;
            }
            else
                i++;
        }
        
        return count;
    }
};