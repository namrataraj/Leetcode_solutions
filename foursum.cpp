/*Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       /* RUNTIME ERROR 
       
       int n = nums.size();
      sort(nums.begin(), nums.end());
      set<vector<int>> set;
      vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
            
            int low = j+1, high = n-1;
            while(low < high ){
                if(nums[i] +nums[j]+ nums[low] + nums[high] < target)
                    low++;
                    
                
                else if(nums[i] +nums[j]+ nums[low] + nums[high] > target)
                    high--;
                
                else{
                    set.insert({nums[i], nums[j],nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
        }} 
        for(auto it : set)
            output.push_back(it);
        
        return output; */
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] < newTarget){
                        low++;
                    }
                    else if(nums[low] + nums[high] > newTarget){
                        high--;
                    }
                    else{
                        set.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++; high--;
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};

