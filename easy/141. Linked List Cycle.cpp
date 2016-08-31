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
	bool hasCycle(ListNode *head) {
		ListNode* slow = head;
		ListNode* fast = head;
		int time = 1;
		if (!head) return false;
		while (slow != fast || time == 1) {
			time++;
			slow = head->next;
			fast = head->next;
			if (!fast) return false;
			if (!slow || !fast) {
				return false;
			}
		}
		return true;
	}
};