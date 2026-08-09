class Solution {
public:
int f(int i,int j,vector<vector<int>>&dp) {
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    int upways = f(i-1,j,dp);
    int downways = f(i,j-1,dp);

    return dp[i][j] = upways+downways;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
              //base case
                if(i==0 && j==0) dp[i][j] = 1;
               else{

               int leftways= 0;
                int upways = 0;
                if(i>0) upways+=dp[i-1][j];
                if(j>0) leftways+=dp[i][j-1];

                dp[i][j] = upways+leftways;
            }  
            }
        }
      return dp[m-1][n-1]; 
    }
};