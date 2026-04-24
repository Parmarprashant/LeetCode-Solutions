// Last updated: 24/04/2026, 10:05:09
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            
            if(!( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') )){
                i++;
                continue;
            }

           
            if(!( (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') )){
                j--;
                continue;
            }

           
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};