/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 ListNode* reverseList(ListNode* head) {
 	if(head==nullptr)
 	return head;
 	ListNode *left=head,*right=head->next;
 	left->next=nullptr;
 	while(right!=nullptr)
 	{
 		ListNode *temp=right->next;
 		right->next=left;
 		left=right;
 		right=temp;
	}
	return left;
 }
