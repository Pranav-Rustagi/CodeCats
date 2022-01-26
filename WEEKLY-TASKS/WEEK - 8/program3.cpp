// https://leetcode.com/problems/image-smoother/

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img.front().size();
        vector<vector<int>> res(m, vector<int>(n));
        
        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                bool jN = (j > 0), jP = (j < n - 1);
                
                int den = 1, avg = img[i][j];
                if(jN && den++)
                    avg += img[i][j - 1];
                if(jP && den++)
                    avg += img[i][j + 1];
                
                if(i > 0 && den++) {
                    avg += img[i - 1][j];
                    if(jN && den++)
                        avg += img[i - 1][j - 1];
                    if(jP && den++)
                        avg += img[i - 1][j + 1];
                }
                
                if(i < m - 1 && den++) {
                    avg += img[i + 1][j];
                    if(jN && den++)
                        avg += img[i + 1][j - 1];
                    if(jP && den++)
                        avg += img[i + 1][j + 1];
                }
                
                res[i][j] = avg / den;
            }
        }
        
        return res;
    }
};