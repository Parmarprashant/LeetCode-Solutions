// Last updated: 24/04/2026, 10:05:04
class Solution {
public:
    int subtractProductAndSum(int n) {
        int multi = 1;
         int sum = 0;
        while(n>0){
            int digi = n%10;
            n = floor(n/10);
            multi = multi * digi;
            sum = sum + digi;
            
        }

        int result = multi - sum;

        return result;
    }
};