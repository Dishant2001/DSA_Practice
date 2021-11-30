//Spiral Traversal of Matrix

#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    int r,c,mat[MAX][MAX];
    cout<<"Enter space separated rows and columns: ";
    cin>>r>>c;
    cout<<"Enter matrix:\n";
    for(int i=0;i<r;++i)
        for(int j=0;j<c;++j)
            cin>>mat[i][j];

    int minr=0,minc=0,maxr=r-1,maxc=c-1,counting=r*c;
    while(counting!=0)
    {
        for(int j=minc,i=minr;j<=maxc&&counting!=0;++j)
        {
            cout<<mat[i][j]<<endl;
            --counting;
        }
        ++minr;
        for(int i=minr,j=maxc;i<=maxr&&counting!=0;++i)
        {
            cout<<mat[i][j]<<endl;
            --counting;
        }
        --maxc;
        for(int i=maxr,j=maxc;j>=minc&&counting!=0;--j)
        {
            cout<<mat[i][j]<<endl;
            --counting;
        }
        --maxr;
        for(int i=maxr,j=minc;i>=minr&&counting!=0;--i)
        {
            cout<<mat[i][j]<<endl;
            --counting;
        }
        ++minc;
    }

    return 0;
}
