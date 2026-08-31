class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());
        vector<int>prev = points[0];
        int cntb = 1;

        for(int i=1; i<n; i++) {
            int currStrt = points[i][0];
            int currEnd = points[i][1];
            
            int prevStrt = prev[0];
            int prevEnd = prev[1];

            if(currStrt>prevEnd) {  //No overlap
                   cntb++;
                   prev = points[i];
            }
            else {  //overlap
                  

                  prev[0] = max(prevStrt,currStrt);
                  prev[1] = min(prevEnd,currEnd);
            }
           
        }
         return cntb;
    }
};