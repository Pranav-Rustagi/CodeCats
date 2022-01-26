// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<pair<int, int>> rows;
        vector<int> res(k, 0);
        
        for(int i = 0 ; i < m ; i++) {
            int count = 0;
            for(auto& el : mat[i])
                if(el)
                    ++count;
            rows.push_back({count, i});
        }
        
        sort(rows.begin(), rows.end());
        for(int i = 0 ; k-- ; i++)
            res[i] = rows[i].second;
        return res;
    }
};