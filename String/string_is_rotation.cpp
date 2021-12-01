//Concatenate original string
//If second string is subset of original, then strings are each other's rotations

#include<bits/stdc++.h>
using namespace std;

int isRotation(string s1,string s2)
{
    string temp=s1+s1;
    return (temp.find(s2)!=-1);
}

int main()
{
    string s1,s2;
    cout<<"Enter string:\n";
    getline(cin,s1);
    cout<<"Enter another string:\n";
    getline(cin,s2);
    if(isRotation(s1,s2))
        cout<<"Strings are each other's rotations";
    else cout<<"Strings are not each other's rotations";
    return 0;
}
