// Last updated: 24/04/2026, 10:05:37
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == target){
                return true;
            }
        }
        return false;
    }
};