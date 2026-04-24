// Last updated: 24/04/2026, 10:05:03
class Solution {
public:
    bool isThree(int n) {
        int store =0;
       for(int i =1; i<=n; i++){
        if(n%i==0){
            store++;
        }
       }
       if(store == 3){
        return true;
       }

       return false;
    }
};