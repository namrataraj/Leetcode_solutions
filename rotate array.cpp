/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp(n);
        /*did not work 
        while(k!=0)
        {int a=nums[0];
            nums[0]=nums[n-1];
            for(int y=n-1;y>0;y--)
            {
                nums[y]=nums[y-1];
            }
            nums[1]=a;
            k--;
        }*/
        for(int y=0;y<n;y++)
            {
                temp[(y+k)%n]=nums[y];
            }
            nums=temp;
    }
};