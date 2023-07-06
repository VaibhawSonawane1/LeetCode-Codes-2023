/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {

    // using fo each loop 
    
    let newArray = [];
   arr.forEach((x,i) => {
      if(fn(x,i)){
         newArray.push(x);
      }
   });
   return newArray;
};