class Solution:
    def countSegments(self, s: str) -> int:
        a=0
        stri=s.split()
        for i in stri:
            a+=1
        return a
        