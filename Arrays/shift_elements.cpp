//shift all -ve elements to left and +ve to right
//O(n) time complexity

#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    int n,arr[MAX],temp;
    cout<<"Enter no. of elements: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int i=0,j=n-1;
    while(i<=j)
    {
        if(arr[i]<0&&arr[j]<0)
            ++i;
        else if(arr[i]>=0&&arr[j]<0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            ++i;
            --j;
        }
        else if(arr[i]>=0&&arr[j]>=0)
            --j;
        else ++i;
    }
    cout<<"All negative elements at one side: \n";
    for(int i=0;i<n;++i)
        cout<<arr[i]<<"  ";
    return 0;
}
