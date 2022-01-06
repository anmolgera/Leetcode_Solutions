/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function(nums, k) {
let sum =0;
for(let i =0; i<k; i++ ){
    sum += nums[i];
}
    
let mx = sum;
for(let i =k; i<nums.length; i++){
    
    sum = sum - nums[i-k] + nums[i];
    mx = Math.max(mx,sum);
}
return mx/k;
};