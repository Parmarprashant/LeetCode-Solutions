// Last updated: 24/04/2026, 10:05:28
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    
    if (n <= 0) return false;

    while (n % 2 === 0) {
        n = n / 2;
    }

    return n === 1;
};


isPowerOfTwo(2);
