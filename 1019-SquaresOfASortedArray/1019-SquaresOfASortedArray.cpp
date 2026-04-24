// Last updated: 24/04/2026, 10:05:07
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());

        return nums;
    }
};