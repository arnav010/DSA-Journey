class Solution {
public:
int findMin(vector<int>&bloomDay) {
    int n = bloomDay.size();
    int mini = INT_MAX;
    

    for(int i=0; i<n; i++) {
     mini = min(mini,bloomDay[i]); 
    }
    return mini;
}

int findMax(vector<int>&bloomDay) {
    int n = bloomDay.size();
    int maxi = INT_MIN;
    

    for(int i=0; i<n; i++) {
     maxi = max(maxi,bloomDay[i]); 
    }
    return maxi;
}

bool possible(vector<int>&bloomDay,int m,int k, int day) {
      int cnt = 0;
      int noofB= 0;
    
    for(int i=0; i<bloomDay.size(); i++) {
        if(bloomDay[i]<=day) {
            cnt++;
        }
        else {
            noofB+= (cnt/k);
            cnt = 0;
        }
        
    }
    noofB+=(cnt/k);

    if(noofB>=m) return true;
    else return false; 
}
    int minDays(vector<int>& bloomDay, int m, int k) {
         int lo = findMin(bloomDay);
         int hi = findMax(bloomDay);
      
         int n = bloomDay.size();
         int ans = hi;

         long long val = m*1LL*k*1LL;
         if(val>n) return -1;

         while(lo<=hi) {
            int mid = lo +(hi-lo)/2;
            

            if(possible(bloomDay,m,k,mid)) {
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