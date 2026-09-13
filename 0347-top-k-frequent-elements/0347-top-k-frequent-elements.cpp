class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int n = nums.size();

        for(int &num : nums) {
            mp[num]++;
        }
       
       vector<vector<int>>buckets(n+1);


       for(auto &it : mp) {

        int element = it.first;
        int freq = it.second;

        buckets[freq].push_back(element);


       }

       //result
       vector<int>result;

       for(int i=n; i>=0; i--) {
            
            if(buckets[i].size()==0) continue;

            while(buckets[i].size()>0 && k>0) {
                result.push_back(buckets[i].back());
                buckets[i].pop_back();
                k--;
            }
       }
       return result;
    }
};