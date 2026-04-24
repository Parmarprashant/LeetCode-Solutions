// Last updated: 24/04/2026, 10:05:30
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n != 0){
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};