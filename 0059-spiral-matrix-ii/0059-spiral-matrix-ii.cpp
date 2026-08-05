class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr = 0;
        int minc = 0;
        int maxr = n-1;
        int maxc = n-1;
        int count = 1;
        vector<vector<int>>v(n,vector<int>(n));
        while(minr<=maxr && minc<=maxc) {
            //right
            for(int j = minc; j<=maxc; j++) {
                v[minr][j] = count++;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;

            //down
            for(int i = minr; i<=maxr; i++) {
                v[i][maxc]  = count++;
            }
            maxc--;
             if(minr>maxr || minc>maxc) break;

            //left
            for(int j = maxc; j>=minc; j--) {
                v[maxr][j] = count++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;

            //up
            for(int i = maxr; i>=minr; i--) {
                v[i][minc] = count++;
            }
            minc++;
             if(minr>maxr || minc>maxc) break;



        
        }
        return v;
    }
};