class Solution {
public:
    int calcVol(vector<int>& height,int i,int j){
        return min(height[i],height[j])*(j-i);
    }
    int maxArea(vector<int>& height) {
        int l=height.size();
        int i=0,j=l-1,vol=calcVol(height,0,l-1);
        while(i<j){
            if(height[i]<height[j])
                ++i;
            else --j;
            vol=max(vol,calcVol(height,i,j));
        }
        return vol;
    }
};