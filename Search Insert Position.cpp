/*Search Insert Position
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,z;
        for(i=0;i<nums.size();i++){
            if(target <= nums[i]){

            
             z=i;
             i=nums.size();
             break;}
            
        }
        return z;
        
    }
    
};