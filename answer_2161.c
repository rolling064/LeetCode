/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int)); // 分配新的記憶體
    *returnSize = numsSize; // 更新返回大小
    int left = 0;
    int right = numsSize - 1;
    for(int i = 0, j = numsSize - 1; i < numsSize; ++i, --j){
        if(nums[i] < pivot){
            result[left] = nums[i];
            left++;
        }
        if(nums[j] > pivot){
            result[right] = nums[j];
            right--;
        }
    }

    while(left <= right){
        result[left] = pivot;
        left++;
    }

    return result;
}