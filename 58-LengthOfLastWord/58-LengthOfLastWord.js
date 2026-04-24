// Last updated: 24/04/2026, 10:05:46
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let lastword = s.trim( ).split(" ").pop();
    let count =0;
    for(var i =0; i<=lastword.length-1; i++){
        count++;
    }
    return count
};