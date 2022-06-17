/**
 * Definition for singly-linked list.
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
	if (!list1 || !list2)
		return (struct ListNode*)((unsigned long)list1 | (unsigned long)list2);
	struct ListNode *result, *current;
	if (list1->val < list2->val) {
		result = list1;
		list1 = list1->next;
	}
	else {
		result = list2;
		list2 = list2->next;
	}
	current = result;
	while (list1 && list2) {
		if (list1->val < list2->val) {
			current->next = list1;
			list1 = list1->next;
		}
		else {
			current->next = list2;
			list2 = list2->next;
		}
		current = current->next;
	}
	current->next = (struct ListNode*)((unsigned long)list1 | (unsigned long)list2);
	return result;
}
