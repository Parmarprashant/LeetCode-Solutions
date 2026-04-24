// Last updated: 24/04/2026, 10:05:02
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let sum = 0;
    let newArr =[];
    for(var i=0; i<=nums.length-1; i++){
        sum +=nums[i];
        newArr.push(sum);
    }
    return newArr;
};