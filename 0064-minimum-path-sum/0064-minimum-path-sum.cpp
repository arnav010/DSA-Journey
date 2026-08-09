class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>>dp(m,vector<int>(n,0));

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(i==0&&j==0) dp[i][j] = grid[i][j];
                 
                 else
                 {
                int upways = grid[i][j]; 
                int leftways = grid[i][j];

                if(i>0) upways+= dp[i-1][j];
                else upways+=1e9;

                if(j>0) leftways+= dp[i][j-1];
                else leftways+=1e9;

                dp[i][j] = min(upways,leftways);
            }
               
            }
        }
        return dp[m-1][n-1];
    }
};