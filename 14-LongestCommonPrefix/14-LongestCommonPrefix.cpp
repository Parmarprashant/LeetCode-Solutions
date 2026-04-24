// Last updated: 24/04/2026, 10:05:48
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string subString = strs[0];
      for(int i = 1; i<strs.size(); ++i){
        while(strs[i].find(subString) != 0){
            subString.pop_back();
        }
      } 
      return subString;
    }
};