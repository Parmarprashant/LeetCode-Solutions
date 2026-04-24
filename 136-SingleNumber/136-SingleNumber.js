// Last updated: 24/04/2026, 10:05:34
/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    const obj = {};

    for (let val of nums) {
        if (obj[val]) {
            obj[val]++;
        } else {
            obj[val] = 1;
        }
    }

    for (let key in obj) {
        if (obj[key] === 1) {
            return Number(key);
        }
    }
};