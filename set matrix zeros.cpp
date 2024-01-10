/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       /* int r=matrix.size();
        int c=matrix[0].size();
         vector<vector<int>> visited = matrix;
        int a=0;int b=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[r][c]==0)
                {
                    a=r;
                    b=c;
                    break;
                }
            }
        }
        for(int x=0;x<r;x++)
        visited[x][b]=0;
        for(int x=0;x<c;x++)
        visited[a][x]=0;*/
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> visited = matrix;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<m; k++){
                        visited[i][k] = 0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++){
                        visited[k][j] = 0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                matrix[i][j] = visited[i][j];}}
        
    }
};