class Solution(object):
    def maximumNumberOfStringPairs(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        count=0
        s=set()
        for ele in words:
            if ele[::-1] in s:
                count+=1
            s.add(ele)
        return count