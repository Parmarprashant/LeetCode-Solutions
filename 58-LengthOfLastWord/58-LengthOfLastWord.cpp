// Last updated: 24/04/2026, 10:05:43
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ' && count > 0){
               break;
            } 
            if(s[i] != ' '){
                count++;
            }
        }

        return count;
    }
};