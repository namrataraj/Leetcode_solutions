/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

*/

class Solution {
public:

void transpose(vector<vector<int>>& matrix,int r,int c) {
        for (int i = 0; i < r; ++i) {
            for (int j = i; j < c; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    void reverseRows(vector<vector<int>>& matrix,int r,int c) {
       for (int i = 0;  i< r; i++) {
            for (int j = 0; j < c/2; j++) {
            int temp = matrix[i][j];
                matrix[i][j] = matrix[i][c-j-1];
                matrix[i][c-j-1] = temp;
            
            }
        }
        }
    

    void rotate(vector<vector<int>>& matrix) {
        int r= matrix.size();
        int c= matrix[0].size();
     transpose(matrix,r,c);
        reverseRows(matrix,r,c);   
        
    }
};