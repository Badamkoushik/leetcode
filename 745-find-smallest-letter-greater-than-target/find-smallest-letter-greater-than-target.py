class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        is_correct = False
        for i in range(len(letters)):
            if (ord(letters[i]) > ord(target)):
                is_correct = True 
                return letters[i]
        if is_correct == False:
            return letters[0]