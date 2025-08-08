class Solution(object):
    def minimumOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans=0
        for i in nums:
            ans+=min(i%3,3-i%3)
        return ans