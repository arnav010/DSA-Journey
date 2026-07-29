class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int n = nums.size();
        int hi = n-1;

        while(mid<=hi) {
            if(nums[mid]==2) {
                int temp  = nums[hi];
                nums[hi] = nums[mid];
                nums[mid] = temp;
                hi--;
            }
            else if(nums[mid]==0){
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;
                low++;
                mid++;
            }
            else mid++;
        }
    }
};