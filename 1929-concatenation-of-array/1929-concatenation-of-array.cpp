class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;

      int i = 0;
      while(i<nums.size()) {
        ans.push_back(nums[i]);
        i++;
      }
     i = 0;
      while(i<nums.size()) {
        ans.push_back(nums[i]);
        i++;
      }
      return ans;
    }
};