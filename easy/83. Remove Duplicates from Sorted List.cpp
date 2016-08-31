/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode* p = head, *q = head->next;
		while (p && q) {
			if (p->val == q->val) {
				ListNode* t = q;
				p->next = q->next;
				q = q->next;
				delete t;
			} else {
				p = p->next;
				q = q->next;
			}
		}
		return head;
	}
};