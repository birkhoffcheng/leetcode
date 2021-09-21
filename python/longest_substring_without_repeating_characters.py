#!/usr/bin/env python
import sys

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        substrset = set()
        begin = 0
        for i in range(len(s)):
            while s[i] in substrset:
                substrset.remove(s[begin])
                begin += 1
            substrset.add(s[i])
            longest = max(longest, i - begin + 1)
        return longest


s = Solution()
print(s.lengthOfLongestSubstring(sys.argv[1]))
