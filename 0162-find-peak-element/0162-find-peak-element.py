class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        x = nums.index(max(nums))
        return x
        