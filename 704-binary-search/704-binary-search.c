

int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    int piviot = 0;
    
    while(left <= right)
    {
        piviot = left + (right - left) /2;
        if(nums[piviot] == target)
        {
            return piviot;
        }
        if(target < nums[piviot])
        {
            right = piviot - 1;
        }else{
            left = piviot + 1;
        }
        
    }
    return -1;
}