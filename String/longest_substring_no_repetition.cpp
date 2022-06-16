//Sliding Window concept, keep left fixed first, increment right, until character is repeated.
//Value of leftmost character is mapped to 0 and left is incremented. 
//Above processes are repeated.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest=0,left=0,right=0;
        unordered_map<char,int>umap;
        while(right<s.length()){
            if(umap[s[right]]==1){
                longest=max(longest,right-left);
                umap[s[left]]=0;
                ++left;
            }
            else{
                umap[s[right]]=1;
                ++right;
            }
        }
        return max(longest,right-left);
    }
};