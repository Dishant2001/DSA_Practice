#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(char* exp)
{
    // Your code here
    stack<int>s;
    for(int i=0;i<sizeof(exp);++i)
    {
        if(exp[i]>='0'&&exp[i]<='9')
            s.push(exp[i]-'0');
        else if(exp[i]=='*'||exp[i]=='/'||exp[i]=='+'||exp[i]=='-')
        {
            int k=s.top();
            s.pop();
            int l=s.top();
            s.pop();
            switch(exp[i])
            {
                case '*': s.push(k*l);
                          break;
                case '/': s.push(l/k);
                          break;
                case '+': s.push(k+l);
                          break;
                case '-': s.push(l-k);
                          break;
            }
        }
    }
    int res=s.top();
    s.pop();
    return res;
}

int main() {
	// your code goes here
	char *S="123+*8-";
	cout<<evaluatePostfix(S);
	return 0;
}