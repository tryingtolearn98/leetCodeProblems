class Solution:
    def romanToInt(self, s: str) -> int:
       store_roman = {'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100, 'D' : 500, 'M' : 1000}
       index = 0
       decimal_number = 0
        
       while index < len(s):
                if index + 1 < len(s):
                    if store_roman[s[index]] < store_roman[s[index+1]]:
                        decimal_number += store_roman[s[index+1]] - store_roman[s[index]]
                        index += 2
                    else:
                        decimal_number += store_roman[s[index]]
                        index += 1
                else:
                     decimal_number += store_roman[s[index]]
                     index += 1
       return decimal_number