class Solution {
public:
void merge(vector<int>&a,vector<int>&b,vector<int>&res) {
int i =0;
int j =0;
int k =0;
while(i<a.size()&&j<b.size()) {
    if(a[i]>b[j]) {
        res[k++]=b[j++];
    }
    else {
        res[k++]=a[i++];
    }
}
if(i==a.size()) {
        while(j<b.size()){
         res[k++]=b[j++];
        }   
    }
    else {
        while(i<a.size()){
        res[k++]=a[i++];
        }
    }
}

vector<int>mergeSort(vector<int>&v) {
    int n = v.size();
    if(n==1) return v;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1),b(n2);
    //copy pasting the vector after dividing them into two parts
        for(int i =0;i<n1;i++) {
          a[i]=v[i];
        }
        for(int i =0; i<n2; i++) {
            b[i]=v[i+n1];
        }
    //magic aka recursion
        mergeSort(a);
        mergeSort(b);
    //merge 
    merge(a,b,v);
    //deleting the vectors for improving space complexity
    a.clear();
    b.clear();
return v;

}
    vector<int> sortArray(vector<int>& nums) {
      return mergeSort(nums);
    }
};