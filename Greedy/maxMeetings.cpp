//Maximum no. of meetings only happen when maximum meetings are scheduled back to back
//Hence, meetings are sorted by their ending times
//Ending time of previous meeting should not be equal to starting time of current meeting

int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>meet;
        for(int i=0;i<n;++i)
            meet.push_back({end[i],start[i]});
        sort(meet.begin(),meet.end());
        int num=1,prev=meet[0].first;
        for(int i=1;i<n;++i)
        {
            if(meet[i].second>prev)
            {
                ++num;
                prev=meet[i].first;
            }
        }
        return num;
    }