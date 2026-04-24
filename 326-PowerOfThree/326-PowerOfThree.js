// Last updated: 24/04/2026, 10:05:22
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
   
    if (n <= 0) return false;

    while (n % 3 === 0) {
        n = n / 3;
    }

    return n === 1;
};


isPowerOfThree(27);
