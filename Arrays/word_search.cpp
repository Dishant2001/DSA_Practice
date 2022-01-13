//Backtracking with DFS

class Solution {
public:
    bool dfs(vector<vector<char>>& board, string &word,int i,int j){
        if(word.size()==0) 
	    return true;
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]!=word[0]) 
	    return false;
        char temp = board[i][j];
        board[i][j] ='*';
        string s = word.substr(1);
        bool result = dfs(board,s,i+1,j)||dfs(board,s,i-1,j)||dfs(board,s,i,j+1)||dfs(board,s,i,j-1);
        board[i][j] =temp;
        return result;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();      
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(board,word,i,j)) 
		    return true;
            }
        }
        return false;
    }
};