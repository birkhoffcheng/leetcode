void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i = 0, j = 0, k = 0;
	int *result = malloc(sizeof(int) * nums1Size);
	while (j < m && k < nums2Size) {
		if (nums1[j] <= nums2[k])
			result[i++] = nums1[j++];
		else
			result[i++] = nums2[k++];
	}
	while (j < m)
		result[i++] = nums1[j++];
	while (k < nums2Size)
		result[i++] = nums2[k++];
	memcpy(nums1, result, sizeof(int) * nums1Size);
}
