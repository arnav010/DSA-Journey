class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        string result  = "";
         
         while(!freq.empty()) {
            char maxchar;
            int maxfreq = 0;

            for(auto &it: freq) {
                if(it.second>maxfreq) {
                    maxfreq = it.second;
                    maxchar = it.first;

                }

            }
              result+=string(maxfreq,maxchar);
            freq.erase(maxchar);
         }
         return result;
    }
};