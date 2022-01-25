//https://www.codechef.com/problems/XYSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
	   cin>>s;
	   int pairs=0;
	   for(int i=0;i<s.length()-1;){
	       if(s[i]!=s[i+1]){
	           ++pairs;
	           i+=2;
	       }
	       else ++i;
	   }
	   cout<<pairs<<"\n";
	}
	return 0;
}