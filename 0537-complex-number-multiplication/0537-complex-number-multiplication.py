class Solution(object):
    def complexNumberMultiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        r1,c1=num1.split('+')
        r2,c2=num2.split('+')
        r1,c1=int(r1),int(c1.split('i')[0])
        r2,c2=int(r2),int(c2.split('i')[0])
        r=r1*r2-c1*c2
        c=r1*c2+r2*c1
        ans =str(r)+'+'+str(c)+'i'
        return ans