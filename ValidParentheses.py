class Solution:
    def isValid(self, s: str) -> bool:
        stack = deque()
        index = 0
        
        while index < len(s):
            
            if(len(stack) > 0):
                if stack[-1] == '(' and s[index] == ')':
                    stack.pop()
                elif stack[-1] == '[' and s[index] == ']':
                    stack.pop()
                elif stack[-1] == '{' and s[index] == '}':
                    stack.pop()
                else:
                    stack.append(s[index])
            else:
                stack.append(s[index])
                
            index += 1
        
        if len(stack) == 0:
            return True
        else:
            return False
        