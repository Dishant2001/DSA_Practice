//First check if move is valid, that is, if location lies inside maze, the value at location is not 0
// and the location is not visited before.
//A visited vector is maintained to avoid re-visiting initial locations.

vector<string>path;
    bool accept(vector<vector<int>>&m,int i,int j,int n,vector<vector<int>>&visited){
        if(i<0||j<0||i>=n||j>=n||m[i][j]==0||visited[i][j]==1)
            return false;
        return true;
    }
    void rat(vector<vector<int>> &m,int i,int j,int n,vector<vector<int>>&visited,string s){
        if(i==n-1&&j==n-1){
            path.push_back(s);
            return;
        }
        visited[i][j]=1;
        if(accept(m,i-1,j,n,visited))
            rat(m,i-1,j,n,visited,s+"U");
        if(accept(m,i+1,j,n,visited))
            rat(m,i+1,j,n,visited,s+"D");
        if(accept(m,i,j+1,n,visited))
            rat(m,i,j+1,n,visited,s+"R");
        if(accept(m,i,j-1,n,visited))
            rat(m,i,j-1,n,visited,s+"L");
        visited[i][j]=0;
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>>visited(n,vector<int>(n,0));
        rat(m,0,0,n,visited,"");
        if(m[0][0]==0||path.size()==0)
            return {"-1"};
        sort(path.begin(),path.end());
        return path;
    }