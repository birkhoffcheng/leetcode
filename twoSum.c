#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target) {
	int i, j, *out;
	for (i = 0; i < numsSize; i++) {
		for (j = numsSize - 1; j > i; j--) {
			if (nums[i] + nums[j] == target) {
				out = malloc(sizeof(int) * 2);
				out[0] = i;
				out[1] = j;
				return out;
			}
		}
	}
	return NULL;
}
