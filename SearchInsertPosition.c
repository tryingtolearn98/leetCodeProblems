int searchInsert(int* nums, int numsSize, int target){
    
    int l = 0 , r = numsSize-1;
    
    while(l <= r)
    {
        int mid = (l+r) / 2;
        
        if(nums[mid] == target)
            return mid;
        
        if(target > nums[mid])
            l = mid+1;
        else
            r = mid-1;
    }
    
    return l;
}