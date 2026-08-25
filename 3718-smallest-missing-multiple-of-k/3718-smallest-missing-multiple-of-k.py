class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        nums.sort()
        a=k
        for i in range(len(nums)):
         while(i<len(nums)):
            if(a==nums[i]) :
                a+=k
                
                break
            if(a<nums[i]):
                 return a
            i+=1
        
        return a
        