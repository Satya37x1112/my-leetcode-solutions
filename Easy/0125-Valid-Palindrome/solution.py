class Solution(object):
    def isPalindrome(self, s):
        s1=''
        s=s.lower()
        for i in range(0,len(s)):
           if s[i].isalpha() or s[i].isdigit():
            s1=s1+s[i]
        if(s1==s1[::-1]):
            return True
        else:
            return False

        """
        :type s: str
        :rtype: bool
        """
        