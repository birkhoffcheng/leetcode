int removeDuplicates(int* nums, int numsSize){
	int current = 0;
	for (int i = 1; i < numsSize; i++) {
		if (nums[i] > nums[current]) {
			nums[++current] = nums[i];
		}
	}
	return current + 1;
}
