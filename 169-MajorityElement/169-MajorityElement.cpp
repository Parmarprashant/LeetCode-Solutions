// Last updated: 24/04/2026, 10:05:31
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    unordered_map<int, int> freq;

    //    for(int i = 0; i<nums.size(); i++){
    //       freq[nums[i]]++;
    //    }

    //    int max = 0;
    //    int ans = 0;

    //    for(auto it: freq){
    //     if(max<it.second){
    //         max = it.second;
    //         ans = it.first;
    //     }
    //    }


        unordered_map<int, int> mp;

        for(int value: nums){
            mp[value]++;
        }

        int freq = nums.size() / 2;

        for(auto it: mp){
            if(it.second > freq){
                return it.first;
            }
        }

        return -1;
    


    
    }
};