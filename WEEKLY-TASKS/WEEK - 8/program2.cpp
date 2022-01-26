// https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int limR = mat.size();
        int limC = mat.front().size();

        if((limR * limC != r * c) || (limR == r))
            return mat;

        vector<vector<int>> res(r, vector<int>(c));
        int iterI = 0, iterJ = 0;

        for(auto &v : mat) {
            for(auto &el : v) {
                res[iterI][iterJ++] = el;
                if(iterJ == c) {
                    iterJ = 0;
                    iterI++;
                }
            }
        }

        return res;
    }
};