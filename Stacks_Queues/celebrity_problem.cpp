//Checking the first row for first person's acquaintances.
//If value 1 is found at jth position in 1st row, we check the jth row for its transpose relations.
//If transpose relations come out to be 1 (know each other) then jth person cannot be a celebrity, return -1.
//Else return j.

int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int c=0;
        for(int j=0;j<n;++j)
        {
            if(M[c][j]==1)
            {
                c=j;
            }
        }
        for(int j=0;j<n;++j)
        {
            if(j!=c&&(M[c][j]==1||M[j][c]==0))
                return -1;
        }
        return c;
    }