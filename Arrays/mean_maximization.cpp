//Observe, sum of largest element and average of other elements is the maximum
//https://www.codechef.com/COOK137B/problems/MEANMAX

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    float num;
    vector<float>arr;
    cin>>t;
    while(t--){
        cin>>n;
        float sum=0,maxi=-1;
        for(int i=0;i<n;++i){
            cin>>num;
            if(num>maxi)
                maxi=num;
            sum+=num;
            arr.push_back(num);
        }
        sum=sum-maxi;
        sum=sum/(n-1);
        sum=sum+maxi;
        cout<<fixed<<setprecision(6)<<(float)sum<<"\n";
    }
    return 0;
}