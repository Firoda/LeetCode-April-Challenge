class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0)    return 0;
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == '0')
                    continue;
                if((i-1 > -1 and grid[i-1][j] == '1') or
                   (j-1 > -1 and grid[i][j-1] == '1'))
                    continue;
                count++;
                //cout << i << " " << j << " \n";
            }
        }
        return count;
    }
};
