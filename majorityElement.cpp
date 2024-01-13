/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       /* int i,j,c,z;
        double m=nums.size()/2.0;
        for( i=0;i<nums.size();i++)
        {
            c=0,z=0;
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]==nums[i])
                 c++;
            }
            if(c>m)
            {
             z=i;
             i=nums.size();
             break;
             }
        }
        return nums[z];*/
        sort(nums.begin(), nums.end());
        int count = 1, value = 0, n = nums.size();
        if(n == 1)
           return nums[0];
        for(int i = 1; i < n; ++i)
        {
            if(nums[i] == nums[i - 1])
            {
                ++count;
                if(count > (n / 2))
                {
                    value = nums[i];
                    break;
                }
            }
        }
        return value;
        }
};