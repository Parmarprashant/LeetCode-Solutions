// Last updated: 24/04/2026, 10:05:52
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if(nums.length === 0){
        return 0;
    }
      var k = 1;
    for(var i =1; i<nums.length; i++){
         if(nums[i] !== nums[i-1]){
         nums[k] = nums[i]
         k++;
        }
    }

    return k;
};


console.log(removeDuplicates([1,1,1,2,2,3,3,4,4,4,4,4]))