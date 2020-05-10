class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0)    return 0;
        int n = grid.size();
        int m = grid[0].size();
        
        int dp[n][m];
        vector<int> prev(m, 0);
        vector<int> curr(m, 0);
        prev[0] = grid[0][0];
        for(int i=1;i<m;i++)
            prev[i] = prev[i-1] + grid[0][i];
        
        
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m; j++)
            {
                if(j>0)
                    curr[j] = min(curr[j-1], prev[j]) + grid[i][j];
                else
                    curr[j] = prev[j] + grid[i][j];
            }
            
            swap(prev, curr);
        }
        
        return prev[m-1];
    }
};
