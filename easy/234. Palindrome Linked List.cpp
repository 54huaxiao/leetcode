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
	bool isPalindrome(ListNode* head) {
		if (head == NULL) return true;
		ListNode* temp = head;
		string s = "";
		while (temp) {
			s += (temp->val + '0');
			temp = temp->next;
		}
		string s1 = s;
		reverse(s.begin(), s.end());
		return s1 == s;
	}
};