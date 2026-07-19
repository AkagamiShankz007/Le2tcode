/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int left = 0;
    int right = numsSize - 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];
        if (leftSquare > rightSquare) {
            result[i] = leftSquare;
            left++; 
        } else {
            result[i] = rightSquare;
            right--; 
        }
    }
    return result;
}