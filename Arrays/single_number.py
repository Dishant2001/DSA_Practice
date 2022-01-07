class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        single={}
        for i in nums:
            if i in single:
                single[i]+=1
            else:
                single[i]=1
        for k in single:
            if single[k]==1:
                return k
        return -1