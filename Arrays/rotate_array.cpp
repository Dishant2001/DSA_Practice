class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l=nums.size();
        k=k%l;
        reverse(nums.begin(),nums.begin()+l-k);
        reverse(nums.begin()+l-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};