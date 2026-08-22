class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        s1=s.split()
        s2=""
        for i in s1:
            if k>0:
                s2=s2+i
                if k>1:
                    s2+=' '
                k-=1
        return s2

        