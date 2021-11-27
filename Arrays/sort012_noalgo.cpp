//Sort array consisting {0,1,2} without any sorting algo

#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    int zeros=0,ones=0,n,arr[MAX],num;
    cout<<"Enter no. of elements: ";
    cin>>n;
    cout<<"Enter elements {0,1,2} :\n";
    for(int i=0;i<n;++i)
    {
        cin>>num;
        if(num==0)
            ++zeros;
        else if(num==1)
            ++ones;
    }
    for(int i=0;i<n;++i)
    {
        if(i<zeros)
            arr[i]=0;
        else if(i>=zeros&&i<zeros+ones)
            arr[i]=1;
        else
            arr[i]=2;
    }
    cout<<"Sorted array without any sorting algo:\n";
    for(int i=0;i<n;++i)
        cout<<arr[i]<<"  ";
    return 0;
}
