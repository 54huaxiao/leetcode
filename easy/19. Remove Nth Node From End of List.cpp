#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
	int num = 0;
	ListNode* temp = head;
	while (temp != NULL) {
		num++;
		temp = temp->next;
	}
	if (num == 1) return NULL;
	num -= n;
	temp = head;
	if (num == 0) {
		head = head->next;
		delete temp;
		return head;
	}
	for (int i = 1; i < num; i++) {
		temp = temp->next;
	}
	ListNode * temp1 = temp->next;
	temp->next = temp1->next;
	delete temp1;
	return head;
}

int main() {
	ListNode* head = new ListNode(10);
	ListNode* temp;
	for (int i = 0; i < 10; i++) {
		temp = (ListNode*)malloc(sizeof(ListNode));
		temp->next = head;
		temp->val = i;
		head = temp;
	}
	head = removeNthFromEnd(head, 2);
	temp = head;
	while (temp) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	system("pause");
}