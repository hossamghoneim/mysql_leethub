

int searchInsert(int* nums, int numsSize, int target){
    int piviot = 0, right = numsSize - 1, left = 0;
    while(left <= right)
    {
        piviot = (right + left) / 2;
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
    return left;

}