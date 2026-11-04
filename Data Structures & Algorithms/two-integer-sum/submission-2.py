class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {} #setting up dictionary in which we can check if a element has been seen before
        for index, value in enumerate(nums):
            difference = target - value
            if difference in seen:
                return [seen[difference], index]
            seen[value] = index
        return []