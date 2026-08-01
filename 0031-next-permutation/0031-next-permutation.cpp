class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        //1) finding the pivot idx
        for(int i=n-2; i>=0; i--) {
            if(nums[i]<nums[i+1]) {
                idx = i;
                break;
            }
        }
        if(idx == -1) {
            reverse(nums.begin(),nums.end());
            return;
        }

        //2 sorting the elements after pivot idx + 1 tooo the end of the nums
        
        reverse(nums.begin()+idx+1,nums.end()); 
         
         //3 finding the just greater element than idx to swap idx with that
         int j = -1;
         for(int i=idx+1; i<n; i++) {
            if(nums[i]>nums[idx]){
            j = i;
            break;
            }
         }
        //4 swap the idx and element j
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
return;
    }
};