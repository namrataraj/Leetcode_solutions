/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,temp;
       for(i=0,j=m;i<m,j<(m+n);i++,j++){
           nums1[j]=nums2[i];
       } 
       for(i=0;i<m+n-1;i++){
           for(j=0;j<m+n-i-1;j++){
               if(nums1[j]>nums1[j+1])
               {
                   temp=nums1[j];
                   nums1[j]=nums1[j+1];
                   nums1[j+1]=temp;
               }

           }


       }
        
    }
};