class Solution {
public:
int findMax(vector<int>&nums) {
    int maxi = INT_MIN;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        maxi = max(maxi,nums[i]);
    }
    return maxi;
}
int sumofD(vector<int>&nums,int mid) {
    int n = nums.size();
    int sum = 0;

    for(int i=0; i<n; i++) {
        sum = sum + ceil( (double)(nums[i]) / (double)(mid) );
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1;
        int hi = findMax(nums);
         int ans = -1;
        while(lo<=hi) {
            int mid = lo +(hi-lo)/2;

            if(sumofD(nums,mid)<=threshold) {
                ans = mid;
                hi = mid-1;
            
            }
            else {
                lo = mid+1;
            }
        }
        return ans;
    }
};