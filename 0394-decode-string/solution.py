class Solution:
    def decodeString(self, s: str) -> str:
        counts, prefixes = [], []
        current = ""
        number = 0
        for ch in s:
            if ch.isdigit():
                number = number * 10 + int(ch)
            elif ch == '[':
                counts.append(number)
                prefixes.append(current)
                number = 0
                current = ""
            elif ch == ']':
                current = prefixes.pop() + current * counts.pop()
            else:
                current += ch
        return current
