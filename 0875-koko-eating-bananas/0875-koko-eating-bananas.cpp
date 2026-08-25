#include<iostream>
class Solution {
public:
int findMax(vector<int>&piles) {
    int n = piles.size();
    int maxe = INT_MIN;
    for(int i = 0; i<n; i++) {
        maxe = max(maxe,piles[i]);
    }
    return maxe;
}
 long long calculateTotalHours(vector<int>& piles, int hourly) {
        long long totalH = 0;

        for(int i = 0; i < piles.size(); i++) {
            totalH += ((long long)piles[i] + hourly - 1) / hourly;
        }

        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo  = 1;
        int hi = findMax(piles);
        while(lo<=hi) {
            int mid = lo + (hi-lo)/2;
            long long totalHours = calculateTotalHours(piles,mid);
            if(totalHours<=h) {
                hi = mid-1;

            }
            else {
                lo = mid+1;
            }
        } 
        return lo;
    }
};