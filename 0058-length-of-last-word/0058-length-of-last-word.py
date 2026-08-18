class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        news=s.strip()
        str=news.split(' ')
        if not str:
            return 0
        return len(str[-1])
        