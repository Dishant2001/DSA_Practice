//Pushing index if next element is smaller than the previous one
//Else popping index until element greater than the previous element, to store next greater.

vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>v(n);
        stack<long long>s;
        s.push(0);
        for(int i=1;i<n;++i)
        {
            if(arr[i]<arr[s.top()])
            {
                s.push(i);
            }
            else
            {
                while(!s.empty()&&arr[s.top()]<arr[i])
                {
                    int ind=s.top();
                    s.pop();
                    v[ind]=arr[i];
                }
                s.push(i);
            }
        }
        while(!s.empty())
        {
            v[s.top()]=-1;
            s.pop();
        }
        return v;
    }