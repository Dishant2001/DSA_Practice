//First and Last occurrence of integer
//Checking from both sides for first and last occurrence

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> pos={-1,-1};
    int l=0,h=n-1;
    while(l<=h)
    {
        if(arr[l]!=x)
            ++l;
        if(arr[h]!=x)
            --h;
        if(arr[l]==x&&arr[h]==x)
        {
            pos[0]=l;
            pos[1]=h;
            break;
        }
    }
    return pos;
}