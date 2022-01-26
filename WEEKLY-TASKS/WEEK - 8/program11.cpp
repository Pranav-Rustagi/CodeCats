// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/

class Solution {
public:
    bool checkRows(vector<vector<int>>& arr, int row, int val) {
        if(arr[row][0] == val && arr[row][1] == val && arr[row][2] == val)
            return true;
        if(row + 1 < arr.size())
            return checkRows(arr, row + 1, val);
        return false;
    }
    
    bool checkColumns(vector<vector<int>>& arr, int col, int val) {
        if(arr[0][col] == val && arr[1][col] == val && arr[2][col] == val)
            return true;
        if(col + 1 < arr.size())
            return checkColumns(arr, col + 1, val);
        return false;
    }
    
    bool checkDiags(vector<vector<int>>& arr, int val) {
        if(arr[1][1] != val)
            return false;
        return ((arr[0][0] == val && arr[2][2] == val) || (arr[0][2] == val && arr[2][0] == val));
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        if(moves.size() < 5)
            return "Pending";
        
        vector<vector<int>> arr(3, vector<int>(3, -1));
        bool toggler = true;
        for(auto& v : moves) {
            arr[v[0]][v[1]] = toggler;
            toggler = !toggler;
        }
        
        if(checkRows(arr, 0, 1) || checkColumns(arr, 0, 1) || checkDiags(arr, 1))
            return "A";
        if(checkRows(arr, 0, 0) || checkColumns(arr, 0, 0) || checkDiags(arr, 0))
            return "B";
        return (moves.size() == 9) ? "Draw" : "Pending";
    }
};