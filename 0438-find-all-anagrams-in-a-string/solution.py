from typing import List


class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        if len(p) > len(s):
            return []

        need = [0] * 26
        window = [0] * 26
        for i, char in enumerate(p):
            need[ord(char) - ord("a")] += 1
            window[ord(s[i]) - ord("a")] += 1

        result = []
        if window == need:
            result.append(0)

        for right in range(len(p), len(s)):
            window[ord(s[right]) - ord("a")] += 1
            window[ord(s[right - len(p)]) - ord("a")] -= 1
            if window == need:
                result.append(right - len(p) + 1)

        return result
