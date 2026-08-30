class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>chars(26,0);

        for (char c: magazine) {
            chars[c-'a']++;

        }
        for (char c: ransomNote) {
            if(chars[c-'a']==0) return false;
            chars[c-'a']--;
        }
        return true;
    }
};