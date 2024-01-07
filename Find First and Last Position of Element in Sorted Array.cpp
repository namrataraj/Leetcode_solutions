/*34. Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i,m=-1,n=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target)
            { n=i;i=nums.size();break;}
             

        }
        for(i=0;i<nums.size();i++){
            if(nums[i]==target)
             m=i;


        }return {n,m};

        
    }
};