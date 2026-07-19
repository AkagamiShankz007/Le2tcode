#include <stdlib.h>
#include <math.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int val = abs(nums[i]);
        int index = val - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }
    int missingCount = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            missingCount++;
        }
    }
    int* result = (int*)malloc(missingCount * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int resultIdx = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            result[resultIdx] = i + 1; 
            resultIdx++;
        }
    }
    *returnSize = missingCount;
    return result;
}