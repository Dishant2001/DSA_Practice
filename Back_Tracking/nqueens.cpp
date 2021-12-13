#include<bits/stdc++.h>
#define MAX 10


int X[MAX]={0},n;

void display()
{
    int i;
    for(i=1;i<=n;++i)
    {
        printf("Row: %d\t",i);
    }
    printf("\n");
    for(i=1;i<=n;++i)
    {
        printf("Col: %d\t",X[i]);
    }
    printf("\n\n");
}

void next_value(int k)
{
    int j,flag;
    while(1)
    {
        flag=1;
        X[k]=(X[k]+1)%(n+1);
        if(X[k]==0)
            return;
        for(j=1;j<k;++j)
            if(X[k]==X[j]||abs(X[k]-X[j])==abs(k-j))
            {
                flag=0;
                break;
            }
        if(flag==0)
            continue;
        return;
    }
}

void nqueens(int k)
{
    while(1)
    {
        next_value(k);
        if(X[k]==0)
            return;
        if(k==n)
            display();
        else
            nqueens(k+1);
    }
}

int main()
{
    printf("Enter no. of Queens 'n': ");
    scanf("%d",&n);
    nqueens(1);
    return 0;
}
