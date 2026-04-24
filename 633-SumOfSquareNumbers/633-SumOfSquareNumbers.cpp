// Last updated: 24/04/2026, 10:05:14
class Solution {
public:
    bool judgeSquareSum(int c) {
        int n = sqrt(c);   
        long long ad1;
        long long ad2; 
        long long sum;
        int j = n;         
        bool check = false;

        for(int i = 0; i <= n; i++){
            while(j >= 0){
                ad1 = i * i;
                ad2 = j * j;
                sum = ad1 + ad2;

                if(sum == c){
                    check = true;
                    break;
                }
                else if(sum > c){
                    j--;  
                }
                else{
                    break; 
                }
            }
            if(check) break;
        }
        return check;
    }
};