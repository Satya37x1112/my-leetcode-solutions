class Solution(object):
    def lengthOfLastWord(self, s):
        s0=s.strip()
        p=s0.split(' ')
        c=0
        s1=len(p)-1
        s2=p[s1]
        for i in range(0,len(s2)):
            c=c+1
        s3=c
       
        return s3
        """
        :type s: str
        :rtype: int
        """
        