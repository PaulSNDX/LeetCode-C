int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] != target || i == j) continue;
            
            int *answer = (int *) malloc(sizeof(int) * 2);
            answer[0] = i;
            answer[1] = j;
            *returnSize = 2;
            return answer;
        }
    }
    *returnSize = 0;
    return NULL;
}
