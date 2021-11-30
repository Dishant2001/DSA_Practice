//Redo with more optimized solution 

int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        vector<int> v;
        for(int i=0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[r*c/2];
    }