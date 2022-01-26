// https://leetcode.com/problems/available-captures-for-rook/

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int posR, posC;
        for(int i = 0, flag = true ; flag && i < 8 ; ++i) {
            for(int j = 0 ; j < 8 ; ++j) {
                if(board[i][j] == 'R') {
                    posR = i;
                    posC = j;
                    flag = false;
                    break;
                }
            }
        }
        
        int count = 0;
        for(int tempR = posR ; tempR >= 0 && board[tempR][posC] != 'B' ; --tempR) {
            if(board[tempR][posC] == 'p') {
                ++count;
                break;
            }
        }
        
        for(int tempR = posR ; tempR < 8 && board[tempR][posC] != 'B' ; ++tempR) {
            if(board[tempR][posC] == 'p') {
                ++count;
                break;
            }
        }
        
        for(int tempC = posC ; tempC >= 0 && board[posR][tempC] != 'B' ; --tempC) {
            if(board[posR][tempC] == 'p') {
                ++count;
                break;
            }
        }
        
        
        for(int tempC = posC ; tempC < 8 && board[posR][tempC] != 'B' ; ++tempC) {
            if(board[posR][tempC] == 'p') {
                ++count;
                break;
            }
        }
        
        return count;
        
    }
};