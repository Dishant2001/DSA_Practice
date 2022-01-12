class Solution {
public:
    int find(vector<int>& nums, int l, int r) {
        if(l == r) return l;
            
        int mid = (l+r)/2;
        bool left = mid-1 < l or nums[mid-1] < nums[mid];
        bool right = mid+1 > r or nums[mid] > nums[mid+1];
        if(left and right) return mid;
        if(!left) return find(nums,l,mid-1);
        return find(nums,mid+1,r);
    }
    
    int findPeakElement(vector<int>& nums) {
        return find(nums,0,nums.size()-1);
    }
};