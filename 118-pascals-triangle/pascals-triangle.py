class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        fin_list = []
        fin_list.append([1])
        if numRows == 1:
            return fin_list 
        for i in range(1,numRows):
            list_a = []
            temp = fin_list[i-1]
            for j in range(0,i + 1):
                if j == 0 or j == i:
                    list_a += [1] 
                else:
                    list_a.append(temp[j] + temp[j - 1])
            fin_list.append(list_a)
        return fin_list