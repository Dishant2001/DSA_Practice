int isPalindrome(char S[])
{
    // Your code goes here
    int l=strlen(S);
    for(int i=0;i<l/2;++i)
    {
        if(S[i]!=S[l-i-1])
            return 0;
    }
    return 1;
}