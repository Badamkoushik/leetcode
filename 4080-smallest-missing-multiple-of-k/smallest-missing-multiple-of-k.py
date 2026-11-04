class Solution(object):
    def missingMultiple(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        val = k
        if k not in nums:
            return k
        else:
            while val < max(nums):
                if val + k not in nums:
                    return val + k 
                val += k
        return max(nums) + k