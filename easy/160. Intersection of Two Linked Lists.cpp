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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (!headA || !headB) return NULL;
		ListNode* temp = headA;
		ListNode* temp1 = headB;
		int len1 = 1, len2 = 1;
		while (temp->next != NULL) {
			temp = temp->next;
			len1++;
		}
		while (temp1->next != NULL) {
			temp1 = temp1->next;
			len2++;
		}
		if (temp != temp1) return NULL;
		if (len1 > len2) {
			for (int i = 0; i < len1 - len2; i++)
				headA = headA->next;
		} else {
			for (int i = 0; i < len2 - len1; i++)
				headB = headB->next;
		}
		while (headA != headB) {
			headA = headA->next;
			headB = headB->next;
		}
		return headA;
	}
};