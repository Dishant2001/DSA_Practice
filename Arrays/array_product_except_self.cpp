class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,l=nums.size(),zeros=0;
        vector<int>answer;
        for(int i=0;i<l;++i){
            if(nums[i]!=0)
                product*=nums[i];
            else
                ++zeros;
        }
        for(int i=0;i<l;++i){
            if(zeros!=0){
                if(zeros==1&&nums[i]==0){
                    answer.push_back(product);
                }
                else
                    answer.push_back(0);
            }
            else
                answer.push_back(product/nums[i]);
        }
        return answer;
    }
};