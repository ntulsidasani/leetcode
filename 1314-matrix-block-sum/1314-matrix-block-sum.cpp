class Solution {
public:
   
    vector<vector<int>> prefsum(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = mat[i][j];
                if (i > 0) ans[i][j] += ans[i-1][j];
                if (j > 0) ans[i][j] += ans[i][j-1];
                if (i > 0 && j > 0) ans[i][j] -= ans[i-1][j-1];
            }
        }
        return ans;
    }

    
    int subarr(vector<vector<int>>& pref, pair<int,int> p1, pair<int,int> p2) {
        int r1 = p1.first, c1 = p1.second;
        int r2 = p2.first, c2 = p2.second;

        int ans = pref[r2][c2];
        if (r1 > 0) ans -= pref[r1-1][c2];
        if (c1 > 0) ans -= pref[r2][c1-1];
        if (r1 > 0 && c1 > 0) ans += pref[r1-1][c1-1];
        return ans;
    }

    
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m));

        
        vector<vector<int>> pref = prefsum(mat);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int r1 = max(0, i-k);
                int c1 = max(0, j-k);
                int r2 = min(n-1, i+k);
                int c2 = min(m-1, j+k);
                ans[i][j] = subarr(pref, {r1, c1}, {r2, c2});
            }
        }
        return ans;
    }
};
