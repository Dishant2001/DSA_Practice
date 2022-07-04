#include <bits/stdc++.h>
using namespace std;

/*check if an array of 'm' elements can be selected from bigger array of size 'n' such that MEX of that array is 'k'.
approach:
-> check if no. of elements not equal to k are m or greater than m.
-> each element in range [0,k-1] occurs atleast once in the array.
-> m is large enough to hold all elements < k
if any of the above conditions is false, answer is false.
*/

int main() {
	// your code goes here
	int t,n,m,k;
	cin>>t;
	while(t--){
	    int count[101],notk=0,num;
	    cin>>n>>m>>k;
	    for(int i=0;i<=n;++i){
	        count[i]=0;
	    }
	    for(int i=1;i<=n;++i){
	        cin>>num;
	        if(num!=k)
	            ++notk;
	        ++count[num];
	    }
	    if((notk<m)||(m<k)){
	        cout<<"NO\n";
	    }
	    else{
	        bool check=true;
	        for(int i=0;i<k;++i){
	            if(count[i]==0){
	                check=false;
	                break;
	            }
	        }
	        if(!check){
	            cout<<"NO\n";
	        }
	        else{
	            cout<<"YES\n";
	        }
	    }
	}
	return 0;
}
