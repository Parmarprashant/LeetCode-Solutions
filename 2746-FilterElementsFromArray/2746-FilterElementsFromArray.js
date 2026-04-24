// Last updated: 24/04/2026, 10:05:01
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let filteredArr = [];

    for (let i = 0; i < arr.length; i++) {
        if (fn(arr[i], i)) {
            filteredArr.push(arr[i]);
        }
    }

    return filteredArr;
};



console.log( filter([-1, 0, -2, 3, 21, 32], (n, i) => i % 2 === 0))