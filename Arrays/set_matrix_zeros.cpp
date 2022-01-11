class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        set<int,greater<int>>rows;
        set<int,greater<int>>cols;
        for(int i=0,j=0;i<m;j=(j+1)%n){
            if(matrix[i][j]==0){
                rows.insert(i);
                cols.insert(j);
            }
            if(j==n-1)
                ++i;
        }
        for(set<int, greater<int> >::iterator i=cols.begin();i!=cols.end();++i){
            for(int j=0;j<m;++j){
                matrix[j][*i]=0;
            }
        }
        for(set<int, greater<int> >::iterator i=rows.begin();i!=rows.end();++i){
            for(int j=0;j<n;++j){
                matrix[*i][j]=0;
            }
        }
    }
};