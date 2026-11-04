class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        count = 1
        nums.sort()
        for i in range(1,len(nums)):
            if nums[i] == nums[count-1]:
                return True
            count += 1
        return False            

                 

            
