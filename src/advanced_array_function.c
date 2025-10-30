#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
    if(size == 0) return 0;

    int max = nums[0];
    int sum = nums[0];

    for (int i = 1; i < size; i++){
        if(sum + nums[i] > nums[i]){
            sum += nums[i];
        } else {
            sum = nums[i];
        }

        if(sum > max){
            max = sum;
        }
    }
    return max;
}

int length_of_lis(int* nums, int numsSize) {
    if(numsSize == 0) return 0;

    int max = 1;
    int length = 1;

    for(int i = 1; i < numsSize; i++){
        if (nums[i] > nums[i-1]){
            length++;
        } else {
            length = 1;
        }

        if(length > max){
            max = length;
        }
    }
    return max;
}

int* merge(int* intervals, int intervalsSize, int* returnSize) {
    if (intervalsSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    int* sorted = (int*)malloc(2 * intervalsSize * sizeof(int));
    for (int i = 0; i < 2 * intervalsSize; i++) {
        sorted[i] = intervals[i];
    }

    for (int i = 0; i < intervalsSize - 1; i++) {
        for (int j = 0; j < intervalsSize - i - 1; j++) {
            if (sorted[2*j] > sorted[2*(j+1)]) {
                int start = sorted[2*j];
                int end = sorted[2*j + 1];
                
                sorted[2*j] = sorted[2*(j+1)];
                sorted[2*j + 1] = sorted[2*(j+1) + 1];
                
                sorted[2*(j+1)] = start;
                sorted[2*(j+1) + 1] = end;
            }
        }
    }
    
    int* result = (int*)malloc(2 * intervalsSize * sizeof(int));
    int count = 0;

    result[0] = sorted[0];
    result[1] = sorted[1];
    count = 1;

    for (int i = 1; i < intervalsSize; i++) {
        int last_end = result[2*count - 1];
        int curr_start = sorted[2*i];
        int curr_end = sorted[2*i + 1];
        
        if (curr_start <= last_end) {
            if (curr_end > last_end) {
                result[2*count - 1] = curr_end;
            }
        } else {
            result[2*count] = curr_start;
            result[2*count + 1] = curr_end;
            count++;
        }
    }
    
    *returnSize = count;
    return result;
}

