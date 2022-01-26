// https://leetcode.com/problems/matrix-cells-in-distance-order/

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<pair<int, vector<int>>> matrix;
        
        for(int i = 0 ; i < rows ; ++i)
            for(int j = 0 ; j < cols ; ++ j)
                matrix.push_back({abs(rCenter - i) + abs(cCenter - j), {i , j}});
        
        sort(matrix.begin(), matrix.end());
        
        vector<vector<int>> res;
        for(auto& point : matrix)
            res.push_back(point.second);
        return res;
    }
};