class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervels) {
        int n = intervels.size();

        vector<vector<int>>ans;

        sort(intervels.begin(),intervels.end());

        for(int i=0; i<n; i++) {
            int start = intervels[i][0];
            int end  = intervels[i][1];
            if(!ans.empty() && end<=ans.back()[1]) {
                continue;
            }

            for(int j=i+1; j<n; j++) {
                if(intervels[j][0]<=end) {
                    end = max(end,intervels[j][1]);
                }
                else {
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
    }
};