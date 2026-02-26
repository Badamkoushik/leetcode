class Solution(object):
    def fib(self,n):
        if n < 1:
            return 1 
        else:
            return n * self.fib(n-1)
    def trailingZeroes(self, n):
        res = self.fib(n)
        result = str(res)
        result_len = len(result) - 1 
        count = 0 
        while(result_len > 0):
            if(result[result_len] == "0"):
                count = count + 1 
            else:
                break 
            result_len = result_len - 1 
        return count
        