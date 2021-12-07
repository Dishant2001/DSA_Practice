static bool maxProfit(Job a,Job b)
    {
        if(a.profit>b.profit)
            return a.profit>b.profit;
        return false;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int>v;
        int check[n+1]={0},profit=0,counts=0;
        sort(arr,arr+n,maxProfit);
        for(int i=0;i<n;++i)
        {
            for(int j=min(n,arr[i].dead);j>=1;--j)
            {
                if(check[j]==0)
                {
                    profit+=arr[i].profit;
                    ++counts;
                    check[j]=1;
                    break;
                }
            }
        }
        v.push_back(counts);
        v.push_back(profit);
        return v;
    } 