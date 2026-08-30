class Solution {
public:
    bool isPalindrome(string s) {
        int strt = 0;
        int end = s.size()-1;

        while(strt<=end) {
            if(!isalnum(s[strt])) {
                strt++;
                continue;
            }
            if(!isalnum(s[end])) {
                end--;
                continue;
            }
            if(tolower(s[strt])!=tolower(s[end])) return false;
            else {
                strt++;
                end--;
            }
        }
        return true;
    }
};