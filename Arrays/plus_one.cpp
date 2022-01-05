class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size()-1;
        digits[size]++;
        for(int i=size;i>0;--i){
            if(digits[i]==10){
                digits[i]=0;
                ++digits[i-1];
            }
        }
        if(digits[0]==10){
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};