class Solution {
public:
int findMaxIndex(vector<vector<int>>arr,int n, int m, int col) {
    int idx = -1;
    int maxe = -1;
    for(int i=0; i<n; i++) {
        if(arr[i][col]>maxe) {
            maxe = max(arr[i][col],maxe);
            idx  = i;
        }
    }
    return idx;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int lo = 0;
        int hi = m-1;
        while(lo<=hi) {
            int mid = lo+(hi-lo)/2;

            int maxRowIndex= findMaxIndex(mat,n,m,mid);
            int left = mid-1>=0 ? mat[maxRowIndex][mid-1] : -1;
            int right = mid+1<m ? mat[maxRowIndex][mid+1] : -1;

            if(mat[maxRowIndex][mid]>left && mat[maxRowIndex][mid]>right) {
                return {maxRowIndex,mid};

            }
            else if(mat[maxRowIndex][mid]>left) {
                lo = mid+1;
            }
            else hi = mid-1;

        }
        return {-1,-1};
    }
};