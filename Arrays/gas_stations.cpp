class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size(),i,j,temp;
        for(i=0;i<n;++i){
            if(gas[i]>=cost[i]){
                temp=gas[i]-cost[i];
                for(j=1;j<n+1;++j){
                    int k=(i+j)%n;
                    if(k==i)
                        return i;
                    temp+=gas[k]-cost[k];
                    if(temp<0){
                        i+=j;
                        break;
                    }
                }
            }
        }
        return -1;
    }
};