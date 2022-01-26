// https://leetcode.com/problems/surface-area-of-3d-shapes/

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int area = 0, rowLim  = grid.size(), colLim = grid[0].size();
        
        if(rowLim == 1 && grid[0][0])
    		return (2 + (grid[0][0] << 2));
        
        for(int i = 0 ; i < rowLim ; i++) {
            for(int j = 0 ; j < colLim ; j++) {
                if(grid[i][j]) {
                    area += 2;

                    bool endRow = (i == 0 || i == rowLim - 1);
                    bool endCol = (j == 0 || j == colLim - 1);

                    if(endRow || endCol) {
                        area += grid[i][j];

                        if(endRow && endCol)
                            area += grid[i][j];
                    }

                    if(i - 1 >= 0 && grid[i][j] > grid[i - 1][j])
                        area += grid[i][j] - grid[i - 1][j];

                    if(i + 1 < rowLim && grid[i][j] > grid[i + 1][j])
                        area += grid[i][j] - grid[i + 1][j];

                    if(j - 1 >= 0 && grid[i][j] > grid[i][j - 1])
                        area += grid[i][j] - grid[i][j - 1];

                    if(j + 1 < colLim && grid[i][j] > grid[i][j + 1])
                        area += grid[i][j] - grid[i][j + 1];
                }
            }
        }
        return area;
    }
};