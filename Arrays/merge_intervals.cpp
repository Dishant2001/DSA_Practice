class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>merged;
        sort(intervals.begin(),intervals.end());
        int l=intervals.size();
        if(l==1){
            merged.push_back(intervals[0]);
            return merged;
        }
        int j=0;
        merged.push_back(intervals[0]);
        for(int i=1;i<l;++i){
            if(merged[j][1]>=intervals[i][0]){
                merged[j][1]=max(merged[j][1],intervals[i][1]);
            }
            else{
                merged.push_back(intervals[i]);
                ++j;
            }
        }
        return merged;
    }
};