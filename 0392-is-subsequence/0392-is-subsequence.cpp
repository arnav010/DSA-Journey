class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            while(j<t.size()) {
                  if (s[i] == t[j]) {
                        j++;
                       cnt++;
                       break;
                  }
            j++;

            }
          
        }
        return cnt == s.size();
    }
};