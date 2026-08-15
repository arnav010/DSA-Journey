class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo  = 0;
        int n = nums.size();
        int hi = n-1;
        int ans = INT_MAX;
        while(lo<=hi) {
            int mid = lo +(hi-lo)/2;

            if(nums[lo]<=nums[mid]) {
                ans = min(ans,nums[lo]);//the minimum in a sorted array(either the left or the right) will be the the starting element of the sorted array

                lo = mid+1;//it might be possible that the minimum element is on the right of the mid..
            }
            else {
                ans = min (ans,nums[mid]);//for a right sorted array...the minimum element would be the starting element of the sorted array

                hi = mid -1;//it might be possible that the minimum element is on the left of the mid..
            }
            
        }
        return ans;
    }
};