class Solution {
public:
int lowerBound(vector<int> &nums, int x){
        int lo = 0;
        int hi = nums.size()-1;
        int lb = nums.size();
        while(lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>=x) {
                hi = mid-1;
                lb = mid;
            }
            else {
                lo = mid+1;
            }
        }
        return lb;
}

int upperBound(vector<int> &nums, int x){
        int lo = 0;
        int hi = nums.size()-1;
        int ub = nums.size();
        while(lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>x) {
                hi = mid-1;
                ub = mid;
            }
            else {
                lo = mid+1;
            }
        }
        return ub;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int lbound = lowerBound(nums,target);

        if(lbound ==nums.size() || nums[lbound]!=target) return {-1,-1};

        return {lbound,upperBound(nums,target)-1}; 
    }
};