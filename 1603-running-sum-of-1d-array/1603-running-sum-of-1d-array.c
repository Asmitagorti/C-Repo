/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int sum=0;
    int index=0;
    int* result=malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;++i){
        sum+=nums[i];
        result[i]=sum;
    }
    *returnSize=numsSize;
    return result;
}