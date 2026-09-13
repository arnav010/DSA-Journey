class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n  = nums.size();
     int cnt = 0;
     int ele ;

//first loop for finding which element might be the possible majority element
     for(int i=0; i<n; i++) {
        if(cnt==0) {   //new element
              cnt = 1;
              ele = nums[i];
        }
        else if(nums[i]==ele) { //same element
            cnt++;
        }
        else{
            cnt--; //different element
        }
     }
         

         //second loop to check whether the possible majority element obtained from loop 1 is genuinely a majority element or not
     int cnt1 = 0;

     for(int i=0; i<n; i++){
         if(nums[i]==ele) {
            cnt1++;
         }
     }

     if(cnt1>n/2) return ele;
     else return -1;   //no majority element




    }
};