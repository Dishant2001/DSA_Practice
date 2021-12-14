char* reverse(char *S, int len)
{
    //code here
    vector<char>stack;
    for(int i=0;i<len;++i)
    {
        stack.push_back(S[i]);
    }
    for(int i=0;i<len;++i)
    {
        S[i]=stack[stack.size()-1];
        stack.pop_back();
    }
    return S;
}