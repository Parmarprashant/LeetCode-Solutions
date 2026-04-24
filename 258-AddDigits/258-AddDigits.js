// Last updated: 24/04/2026, 10:05:26
/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    var sum =0;
    if(num<10){
        return num;
    }
    while(num>0){
    var digit = num%10;
    sum = sum +digit;
    num = Math.floor(num/10);
    }
    
    return addDigits(sum);
  
 
  

};