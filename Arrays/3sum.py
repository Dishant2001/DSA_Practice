#2 pointer approach

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        rec=[]
        l=len(nums)
        if l<3:
            return []
        nums.sort()
        for i in range(l-2):
            j=i+1
            k=l-1
            while j<k:
                sum=nums[i]+nums[j]+nums[k]
                if sum==0:
                    r=[nums[i],nums[j],nums[k]]
                    if r not in rec:
                        rec.append(r)
                    j+=1
                    k-=1
                elif sum<0:
                    j+=1
                else:
                    k-=1
        return rec
            