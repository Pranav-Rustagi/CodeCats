// https://leetcode.com/problems/projection-area-of-3d-shapes/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        
        if(n == 1)
            return ((grid[0][0] << 1) + 1);
        
        int area = 0;
        vector<int> maxHeight(n, 0);
        
        for(int i = 0 ; i < n ; i++) {
            int maxInRow = 0;
            for(int j = 0 ; j < n ; j++) {
                if(grid[i][j]) {
                    area++;
                    if(maxInRow < grid[i][j])
                        maxInRow = grid[i][j];
                    if(maxHeight[j] < grid[i][j])
                        maxHeight[j] = grid[i][j];
                }
            }
            area += maxInRow;
        }
        
        return accumulate(maxHeight.begin(), maxHeight.end(), area);
    }
};