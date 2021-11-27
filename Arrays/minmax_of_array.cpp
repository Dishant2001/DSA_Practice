//Divide and Conquer Approach

#include<bits/stdc++.h>
#define MAX 100
using namespace std;

typedef struct{
 int fmin,fmax;
}store;

void MinMax(int arr[],int i,int j,store *S)
{
    store g,h;
    if(i==j)
    {
        S->fmin=arr[i];
        S->fmax=arr[i];
        return;
    }
    if(i==(j-1))
    {
        S->fmin=min(arr[i],arr[j]);
        S->fmax=max(arr[i],arr[j]);
        return;
    }
    int m=(i+j)/2;
    MinMax(arr,i,m,&g);
    MinMax(arr,m+1,j,&h);
    S->fmin=min(g.fmin,h.fmin);
    S->fmax=max(g.fmax,h.fmax);
    return;
}


int main()
{
    int n,arr[MAX];
    store S;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;++i)
        cin>>arr[i];
    MinMax(arr,0,n-1,&S);
    printf("Minimum Element: %d  Maximum Element: %d",S.fmin,S.fmax);
    return 0;
}
