class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        from collections import Counter

        freq = Counter(text)
        needed = {'b': 1 , 'a' : 1 , 'l':2 , 'o': 2 , 'n': 1}

        return min(freq[ch] // count for ch , count in needed.items())
    
        