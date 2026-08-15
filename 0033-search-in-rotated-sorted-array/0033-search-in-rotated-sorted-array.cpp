class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int n = nums.size();
        int hi = n-1;
        while(lo<=hi) {
            int mid = lo + (hi-lo)/2;

            if(nums[mid]==target) return mid;

    //if the nums is left sorted...means the left of the nums[mid] is completely sorted
            else if(nums[lo]<=nums[mid]) {
                     if(nums[lo]<=target && target<=nums[mid]) {
                        hi = mid -1;
                     }
                     else {
                        lo = mid+1;
                     }
            }
            //if the nums is right sorted
            else{   //nums[hi]>=nums[mid] ..means right of nums[mid]  is sorted
                 if(target>=nums[mid] &&  target<=nums[hi]) {
                    lo = mid+1;
                 }
                 else {
                    hi = mid-1;
                 }

            }
        }
       return -1;
    }
};