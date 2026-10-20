from typing import List

class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        smaller = sum(num < target for num in nums)
        equal = sum(num == target for num in nums)
        return list(range(smaller, smaller + equal))
