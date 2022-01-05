class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int c=0,minc=0,minr=0,maxc=n-1,maxr=m-1;
        vector<int>vec;
        while(c!=m*n){
            for(int i=minr,j=minc;j<=maxc&&c<m*n;++j)
            {
                ++c;
                vec.push_back(matrix[i][j]);
            }
            ++minr;
            for(int i=minr,j=maxc;i<=maxr&&c<m*n;++i){
                ++c;
                vec.push_back(matrix[i][j]);
            }
            --maxc;
            for(int j=maxc,i=maxr;j>=minc&&c<m*n;--j){
                ++c;
                vec.push_back(matrix[i][j]);
            }
            --maxr;
            for(int i=maxr,j=minc;i>=minr&&c<m*n;--i){
                ++c;
                vec.push_back(matrix[i][j]);
            }
            ++minc;
        }
        return vec;
    }
};