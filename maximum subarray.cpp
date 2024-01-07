//Maximum Subarray
/*Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
           return nums[0];
        int maxSum = INT_MIN;
        int currentSum = 0;
        
        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
            
            if (currentSum > maxSum) 
                maxSum = currentSum;
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxSum;   

        
    }
};