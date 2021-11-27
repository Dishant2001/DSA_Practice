//Kth Min/Max using Merge Sort
// O(n*log(n)) time complexity

#include<bits/stdc++.h>
#define MAX 100
using namespace std;

void merge1(int X[],int lb,int m,int ub)
{
    int  i=lb,j=m+1,k=0,temp[MAX];

    while(i<=m&&j<=ub)
    {
        if(X[i]<X[j])
        {
            temp[k]=X[i];
            ++k;
            ++i;
        }
        else
        {
            temp[k]=X[j];
            ++k;
            ++j;
        }
    }
    while(i<=m)
    {
        temp[k]=X[i];
        ++k;
        ++i;
    }
    while(j<=ub)
    {
        temp[k]=X[j];
        ++k;
        ++j;
    }
    k=0;
    for(i=lb;i<=ub;++i)
    {
        X[i]=temp[k];
        ++k;
    }
}

void mergesort(int X[],int lb,int ub)
{
    if(lb<ub)
    {
        int m=(lb+ub)/2;
        mergesort(X,lb,m);
        mergesort(X,m+1,ub);
        merge1(X,lb,m,ub);
    }
}

int main()
{
    int n,k,arr[MAX];
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(int i=0;i<n;++i)
        cin>>arr[i];
    cout<<"Enter 'k' for kth min/max element: ";
    cin>>k;
    mergesort(arr,0,n-1);
    cout<<"kth min (k="<<k<<") :"<<arr[k-1]<<endl;
    cout<<"kth max (k="<<k<<") :"<<arr[n-k];
    return 0;
}
