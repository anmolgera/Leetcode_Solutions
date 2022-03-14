/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
   
    const val = new Map();
    for(let i =0; i<nums.length; i++){
    //const match = nums[i];
    const ch = target-nums[i];
    const match = val.get(ch);
    if(match != undefined){
       return [match,i];
    }
     
    val.set(nums[i], i);
         
    }
    
};