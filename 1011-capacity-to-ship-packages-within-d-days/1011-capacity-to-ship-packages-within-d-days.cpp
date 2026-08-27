class Solution {
public:
int findMax(vector<int>&weights) {
    int n = weights.size();
    int maxe= INT_MIN;
    for(int i=0; i<n; i++) {
        maxe = max(maxe,weights[i]);
    }
    return maxe;
}

int sumofAll(vector<int>&weights) {
    int sum = 0;
    for(int i=0; i<weights.size(); i++) {
        sum = sum+weights[i];
    }
    return sum;
}
int noofDays(vector<int>&weights,int cap) {
    int n = weights.size();
    int days = 1;
    int load = 0;
    
    for(int i=0; i<n; i++){
  if(weights[i]+load>cap) {
        days = days+1;
        load = weights[i];
    }
    else {
        load+=weights[i];
    }
    }
  
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
       
       int lo = findMax(weights);
       int hi = sumofAll(weights);
       int cap = 0;
       while(lo<=hi) {
        int mid = lo+(hi-lo)/2;

        if(noofDays(weights,mid)<=days) {
            cap = mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
       }
return cap;

    }
};