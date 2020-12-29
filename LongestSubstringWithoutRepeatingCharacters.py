class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dict_letters = {}
        i = 0 
        j = 0
        longest_substring = 0
        
        while j < len(s):
            if s[j] in dict_letters:
                i = max(dict_letters[s[j]], i)
            
            longest_substring = max(longest_substring, j-i+1)
            
            dict_letters[s[j]] = j+1
            
            j += 1
            
        return longest_substring