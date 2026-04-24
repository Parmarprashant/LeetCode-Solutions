// Last updated: 24/04/2026, 10:05:33
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2) return 0;

        sort(nums.begin(), nums.end());
        
        int maxGap = 0;
        
        for(int i = 0; i < nums.size() - 1; i++){
            int gap = nums[i+1] - nums[i];
            maxGap = max(maxGap, gap);
        }
        
        return maxGap;
    }
};
