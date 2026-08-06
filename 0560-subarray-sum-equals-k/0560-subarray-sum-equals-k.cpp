class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;//<presum(of numbers till ith index) , count of it>

        mp[0] = 1;//initially putting 0 in the map with cnt 1...for a precaution coz there can be a 0 sum as well in the map

        int cnt = 0;
        int preSum = 0;
        
        for(int i =0; i<nums.size(); i++) {
            preSum += nums[i];

            int remove = preSum-k;
            //if the remove is found...adding the count of the map directly to cnt...else if it was not found then mp[remove] would be automatically 0 
            cnt += mp[remove];

            //putting the presum into the map with a count++
            mp[preSum] += 1;
        }
        return cnt;
    }
};