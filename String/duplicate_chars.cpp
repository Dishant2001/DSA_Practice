//

#include<bits/stdc++.h>
#define CHARS 256
using namespace std;

int charcount[CHARS]={0};

void countStore(string s)
{
    for(int i=0;s[i]!='\0';++i)
        ++charcount[int(s[i])];
    for(int i=0;i<CHARS;++i)
    {
        if(charcount[i]>1)
            cout<<char(i)<<" : "<<charcount[i]<<endl;
    }
}

int main()
{
    string s;
    cout<<"Enter your string:\n";
    getline(cin,s);
    countStore(s);
    return 0;
}
