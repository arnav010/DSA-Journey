class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;

        for(char ch:s) {
            if(mp.find(ch)!=mp.end()){
                return ch;
                break;
            }
            mp[ch]++;
        }
        return ' ';
    }
};