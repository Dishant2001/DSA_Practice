//First take transpose, then reverse each row
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp,n=matrix.size();
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                temp=matrix[j][i];
                matrix[j][i]=matrix[i][j];
                matrix[i][j]=temp;
            }
        }
        for(int i=0;i<n;++i){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};