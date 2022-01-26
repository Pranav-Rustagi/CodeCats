// https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int column = grid[0].size();
        
        int landPerimeter = 0;
        bool landFound = false;
        for(int i = 0 ; i < row ; i++) {
            int sum = 0;
            for(int j = 0 ; j < column ; j++) {
                if(grid[i][j] == 0)
                    continue;
                if(i == 0 || grid[i - 1][j] == 0)
                    sum++;
                if(i == row - 1 || grid[i + 1][j] == 0)
                    sum++;
                if(j == 0 || grid[i][j - 1] == 0)
                    sum++;
                if(j == column - 1 || grid[i][j + 1] == 0)
                    sum++;
            }
            if(sum > 0) {
                landPerimeter += sum;
                if(!landFound)
                    landFound = true;
            }
            else if(landFound)
                break;
        }
        
        return landPerimeter;
    }
};