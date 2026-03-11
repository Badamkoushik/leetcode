class NumArray:

    def __init__(self, nums: List[int]):
        n = len(nums)
        self.prefix_array = [0] * n
        self.prefix_array[0] = nums[0]
        for i in range(1,n):
            self.prefix_array[i] = self.prefix_array[i - 1] + nums[i]
        
    def sumRange(self, left: int, right: int) -> int:
        if(left == 0):
            return self.prefix_array[right]
        else:
            return self.prefix_array[right] - self.prefix_array[left - 1]; 

# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)