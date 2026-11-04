class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        j = 1
        nums.sort()
        for i in range(1,len(nums)):
            if nums[i] == nums[j-1]:
                return True
            j += 1
        return False            

                 

            
