/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,s=0,n=nums.size();
        for(i=0;i<nums.size();i++)
        {
            s=s+nums[i];
        }
        double t=(n*(n+1))/2;
        int z=t-s;
        return z;
    }
};
