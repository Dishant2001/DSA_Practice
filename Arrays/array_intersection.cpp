class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());                                      //{3,4,1,2,5}  -> {1,2,3,4,5}
        sort(nums2.begin(),nums2.end());                                      //{4,2,6,5,7}  -> {2,4,5,6}
        int i=0,j=0;
        vector<int>intersection;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j]){
                intersection.push_back(nums1[i]);
                ++i;
                ++j;
            }
            else if(nums1[i]<nums2[j])
                ++i;
            else
                ++j;
        }
        return intersection;
    }
};