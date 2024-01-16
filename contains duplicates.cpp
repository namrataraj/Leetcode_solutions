/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> h;
        for(int i=0;i<n;i++)
        h[nums[i]]+=1;
        for(int i=0;i<n;i++)
        {
            if(h[nums[i]]>1)
            return  1;
        }
        return 0;
}
};
