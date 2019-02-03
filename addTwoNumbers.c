/**
 * Definition for singly-linked list.
 * struct ListNode {
 *	   int val;
 *	   struct ListNode *next;
 * };
 */
#include <stdlib.h>
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int sum = 0;
	int carry = 0;
	struct ListNode* out = malloc(sizeof(struct ListNode));
	struct ListNode* tmp = out;

	while(l1 || l2) {
		sum = carry + (l1? l1->val: 0) + (l2? l2->val: 0);
		carry = sum>=10? sum/10: 0;
		sum %= 10;
		tmp->val = sum;
		l1 = l1? l1->next: NULL;
		l2 = l2? l2->next: NULL;
		if(l1 || l2) {
			tmp->next = malloc(sizeof(struct ListNode));
			tmp = tmp->next;
		}
		else if(carry) {
			tmp->next = malloc(sizeof(struct ListNode));
			tmp = tmp->next;
			tmp->val = carry;
		}
	}
	tmp->next = NULL;

	return out;
}
