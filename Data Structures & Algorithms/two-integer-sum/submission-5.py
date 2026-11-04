class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)
        result = []
        j = 1
        for i in range(length):
            for j in range(length):
                if nums[i] + nums[j] == target and i != j:
                    result.append(i)
                    result.append(j)
                    return result
        return []