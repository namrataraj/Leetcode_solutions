/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j,temp;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size()-i-1;j++){
                if(nums[j]==0)
                {
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }       
         }
        
    }
};
