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
    ListNode *detectCycle(ListNode *head) {
      unordered_set <ListNode *> myset;
      while(head!=nullptr)
      {
        if(myset.count(head))
        {
            return head;
        } 
        myset.insert(head);
        head=head->next;
      }
      return nullptr;
    }
};
