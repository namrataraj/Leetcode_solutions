/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int i,z=0,n=nums.size();int h[1000000]={0};
        for(i=0;i<n;i++)
        {
            h[nums[i]]+=1;
        }
        for(i=0;i<1000000;i++)
        {
            if(h[i]>1)
           { z=i;break;}
        }return z;
    }
};
