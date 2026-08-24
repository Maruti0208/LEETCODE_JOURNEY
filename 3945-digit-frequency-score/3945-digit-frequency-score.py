class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        v=[0]*10
        while n>0:
            c=n%10
            v[c]+=1
            n//=10
        ans=0
        for i in range(10):
            ans+=v[i]*i
        return ans
        