class Solution:
    def checkDivisibility(self, n: int) -> bool:
        s=0
        m=1
        x=n
        while x>0:
            r=x%10
            s+=r
            m*=r
            x=x//10

        return n%(s+m)==0