//Concept of Merge Intervals
//Asked in Amazon Interview several times

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<pair<int,int>>interval;
        int alpha[123]={0};
        int l=s.length();
        for(int i=0;i<l;++i){
            if(alpha[int(s[i])]==0){
                for(int j=l-1;j>=i;--j){
                    if(s[j]==s[i]){
                        interval.push_back(make_pair(i,j));
                        alpha[int(s[i])]=1;
                        break;
                    }
                }
            }
        }
        int start=0,last=interval[0].second;
        vector<int>part_size;
        for(int i=0;i<interval.size();++i){
            if(interval[i].first<=last){
                if(interval[i].second>last)
                    last=interval[i].second;
            }
            else{
                part_size.push_back(last-start+1);
                start=interval[i].first;
                last=interval[i].second;
            }
        }
        part_size.push_back(last-start+1);
        return part_size;
    }
};