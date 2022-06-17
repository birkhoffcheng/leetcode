struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
	struct ListNode *result = NULL;
	int i;
	for (i = 0; i < listsSize; i++)
		result = mergeTwoLists(result, lists[i]);
	return result;
}
