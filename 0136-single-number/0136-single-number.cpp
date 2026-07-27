class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>mp;

        int ans;

        for(int i = 0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto &it: mp){
            int element  = it.first;
            int count = it.second;

        
        if(count==1) 
         ans = element;
        }
return ans;
    }
};