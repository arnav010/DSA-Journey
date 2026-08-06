class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervels) {
        int n = intervels.size();

        vector<vector<int>>ans;

        sort(intervels.begin(),intervels.end());

        for(int i=0; i<n; i++) {
            if(ans.empty()|| intervels[i][0]>ans.back()[1]) {//either the ans is empty or if the intervel's start element is greater than the ans's end element..........then the intervel will be a new intervel and it needs to be pushed in the answer
                ans.push_back(intervels[i]);
            }
            else { // the intervel's start element lies between the ans's intervel so therefore the max of the intervel's end element and the ans's end element would be taken as answer

            ans.back()[1] = max(intervels[i][1],ans.back()[1]);

            }

        }
return  ans;
    }
};