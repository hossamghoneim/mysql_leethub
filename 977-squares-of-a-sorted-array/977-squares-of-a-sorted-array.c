

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int* ans = calloc(numsSize, sizeof(int));
    *returnSize = numsSize;
    
    int counter = 0;
    int end = numsSize - 1;
    int index = numsSize - 1;

    
    while(counter <= end)
    {
        if(-nums[counter] > nums[end])
        {
            ans[index--] = nums[counter] * nums[counter];
            counter++;
        }else{
            ans[index--] = nums[end] * nums[end];
            end--;
        }
        
    }
    return ans;
}