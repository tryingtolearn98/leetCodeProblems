int removeElement(int* nums, int numsSize, int val){
    
    int slow_runner = 0;
    int fast_runner = 0;
    
    
    for(fast_runner = 0; fast_runner < numsSize; fast_runner++)
    {
        if(nums[fast_runner] != val)
        {
            nums[slow_runner] = nums[fast_runner];
            slow_runner++;
        }
    }
    
    return slow_runner;
}