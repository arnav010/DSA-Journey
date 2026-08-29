class Solution {
public:
int findMin(vector<int>&nums,int n) {
    int mine = INT_MAX;
    for(int i=0; i<n; i++) {
        mine = min(mine,nums[i]);
    }
    return mine;
}
long long findSumofArray(vector<int>&nums,int n) {
    long long sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum+nums[i];
    }
    return sum;
}
bool canAllocateinSubarray(vector<int>&nums,int k,long long barrierSum) {
    int noofSubarray = 1;
    long long subarraySum = 0;
    int n = nums.size();

    for(int i=0; i<n; i++ ){
        if(nums[i]>barrierSum) return false;
        if(subarraySum+nums[i]>barrierSum) {
            noofSubarray++;
            subarraySum = nums[i];
        }
        else {
            subarraySum+=nums[i];
        }
    }

    if(noofSubarray>k) return false;
    else return true;
}
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long lo = findMin(nums,n);
        long long hi = findSumofArray(nums,n);
        long long res = -1;

        while(lo<=hi) {
            int mid = lo+(hi-lo)/2;

            if(canAllocateinSubarray(nums,k,mid)) {
                res = mid;
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        return (int)res;

    }
};