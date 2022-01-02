class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        pairs={}
        for ind,i in enumerate(nums):
            left=target-i
            if left in pairs:
                return [ind,pairs[left]]
            pairs[i]=ind
