class Solution:
    def trap(self, height: List[int]) -> int:
        
        if len(height) > 0:
            water_after_raining = 0
            
            max_left_side  = [0]*len(height)
            max_right_side = [0]*len(height)

            max_left_side[0] = 0
            max_right_side[len(height) - 1] = 0

            for i in range (1,len(height)):
                max_left_side[i] = max(max_left_side[i-1],height[i-1])

            for i in range (len(height)-2, -1, -1):
                max_right_side[i] = max(max_right_side[i+1], height[i+1])

            for i in range (0, len(height)):
                water_after_raining += max(0, min(max_left_side[i], max_right_side[i]) - height[i])

            return water_after_raining
        else:
            return 0