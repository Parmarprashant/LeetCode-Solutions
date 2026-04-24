// Last updated: 24/04/2026, 10:05:17
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charFreq;

       
        for(char c : s){
            charFreq[c]++;
        }

       
        for(int i = 0; i < s.size(); i++){
            if(charFreq[s[i]] == 1){
                return i;
            }
        }

        return -1;
    }
};