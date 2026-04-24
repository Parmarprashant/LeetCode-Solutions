// Last updated: 24/04/2026, 10:05:27
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
  let sorted = s.split("").sort().join("");
    let sorted1 = t.split("").sort().join("");

    if(sorted == sorted1){
        return true;
    }
    else{
        return false;
    }
};