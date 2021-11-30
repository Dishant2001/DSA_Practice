//Binary Search
//Leetcode Question

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for(int i=0;i<matrix.size();++i)
    {
        if(target<=matrix[i][matrix[0].size()-1])
        {
        int l=0,h=matrix[0].size()-1,m;
           while(l<=h)
           {
               m=l+(h-l)/2;
               if(target==matrix[i][m])
                   return true;
               if(matrix[i][m]>target)
                   h=m-1;
               else
                   l=m+1;
           }
        }
    }
    return false;
 }