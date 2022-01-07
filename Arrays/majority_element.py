class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        major={}
        n=len(nums)
        if n==1:
            return nums[0]
        for i in nums:
            if i in major:
                major[i]+=1
                if major[i]>n//2:
                    return i
            else:
                major[i]=1
        return -1