/**
 * Definition for singly-linked list.
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

struct ListNode* sortList(struct ListNode* head) {
	if (!head || !head->next)
		return head;
	struct ListNode *left, *right;
	left = head;
	right = head->next;
	while (left && right && right->next) {
		left = left->next;
		right = right->next->next;
	}
	right = left->next;
	left->next = NULL;
	left = sortList(head);
	right = sortList(right);
	return mergeTwoLists(left, right);
}
