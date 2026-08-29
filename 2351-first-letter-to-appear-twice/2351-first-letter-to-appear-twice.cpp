class Solution {
public:
    char repeatedCharacter(string s) {
    vector<int>freq(26,0);

    for(char ch: s) {
        int index = ch-'a';

        freq[index]++;

        if(freq[index]==2) 
        return ch;
    
    }
    return ' ';
    }
};