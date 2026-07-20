class Solution(object):
    def twoSum(self, nums, target):
        num_dict = {}  # Dictionary to store number index pairs
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_dict:
                return [num_dict[complement], i]  # Return indices of the two numbers
            num_dict[num] = i  # Store current number and its index
        return []  # Return an empty list if no solution is found

nums = [2, 7, 11, 15]
target = 9
solution = Solution()
print(solution.twoSum(nums, target))