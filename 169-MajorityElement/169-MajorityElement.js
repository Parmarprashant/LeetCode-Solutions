// Last updated: 24/04/2026, 10:05:35
var majorityElement = function(nums) {
    var obj = {};
    var n = nums.length;

    for (var i = 0; i < n; i++) {
        obj[nums[i]] = (obj[nums[i]] || 0) + 1;

        if (obj[nums[i]] > n / 2) {
            return nums[i];
        }
    }
};
