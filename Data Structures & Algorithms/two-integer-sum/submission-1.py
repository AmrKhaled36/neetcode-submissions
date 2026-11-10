class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        size = len(nums)
        dic = {}

        for i in range(size):
            if dic.get(nums[i], -1) != -1:
                return [dic[nums[i]], i]
            comp = target - nums[i]
            dic[comp] = i
         
        