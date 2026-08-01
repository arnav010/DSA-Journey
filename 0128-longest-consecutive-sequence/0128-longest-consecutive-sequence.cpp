class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n = nums.size();
      if(nums.size()==0) return 0;
      sort(nums.begin(),nums.end());
      int largest = 1;
      int curcount = 0;
      int lastsmaller = INT_MIN;
        for(int i = 0; i<n; i++) {
             if(nums[i]-1 == lastsmaller) {
                curcount = curcount+1;
                lastsmaller = nums[i];
             }
             else if(nums[i]!=lastsmaller) {
                lastsmaller = nums[i];
                curcount = 1;

             }
             largest = max(largest,curcount);
        }
    return largest;
    }
};