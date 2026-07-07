class Solution(object):
    def sumAndMultiply(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = str(n)
        result = 0
        is_there = False
        x = ""
        for ch in res:
            if ch != '0':
                result += int(ch)
                x += ch 
        if x == "":
            x = 0
        else:
            x = int(x)
        return x * result