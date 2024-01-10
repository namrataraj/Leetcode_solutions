/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j,f=0;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(target == matrix[i][j])
                f=1;
            }
        }return f;
        
    }
};