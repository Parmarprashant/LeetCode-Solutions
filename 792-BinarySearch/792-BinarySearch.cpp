// Last updated: 24/04/2026, 10:05:12
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};