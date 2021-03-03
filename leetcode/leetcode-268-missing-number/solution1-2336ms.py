class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        size = len(nums)
        for i in range(size+1):
            if i in nums:
                pass
            else:
                return i
