class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        fin_list = [[1]]
        for i in range(1,rowIndex + 1):
            list_a = []
            temp = fin_list[i - 1]
            for j in range(0, i+1):
                if j == 0 or j == i:
                    list_a.append(1)
                else:
                    list_a.append(temp[j] + temp[j - 1])
            fin_list.append(list_a)
        return fin_list[rowIndex]