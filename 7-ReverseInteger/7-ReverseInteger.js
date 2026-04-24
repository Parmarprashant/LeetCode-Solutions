// Last updated: 24/04/2026, 10:06:02
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let sign = x < 0 ? -1 : 1;
    x = Math.abs(x);

    let rev = 0;
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x = Math.floor(x / 10);
    }

        rev = rev * sign;

    if (rev < -2147483648 || rev > 2147483647) {
        return 0;
    }

    return rev;
};

console.log(reverse(-123));
