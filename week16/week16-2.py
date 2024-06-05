class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        counter=Counter(words[0])
        for i in range(1,len(words)):
            counter &= Counter(words[i])
        ans=[]
        for c in counter:
            for i in range(counter[c]):
                ans.append(c)
        return ans